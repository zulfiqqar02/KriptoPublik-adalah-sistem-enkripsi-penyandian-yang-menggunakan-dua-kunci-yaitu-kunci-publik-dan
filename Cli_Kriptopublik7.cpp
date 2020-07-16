    #include <conio.h>  
    #include <iostream>  
    using namespace std;  
      
    int main() {  
        int m, n, x, y, pil;
        long int total = 1; 
        long int enkrip = 1;
		
		char karakter; 
        long int pemodulo, pengirim, penerima, key, chiper, deskrip;
      
        cout << "=====================================================" << endl;  
        cout << "      Kriptografi dengan Algoritma KriptoPublik      " << endl;  
        cout << "=====================================================" << endl << endl;  
 		cout << "1. ENKRIPSI"<<endl;
 		cout << "2. DESKRIPSI"<<endl;
 		cout <<"------------------------------------------------------" << endl;
 		
 		cout <<"Masukkan Pilihan : ";
 		cin>>pil;
 		
 		switch(pil){
		 case 1 :     
		        cout<<"Masukkan Pesan yang Akan Dienkripsi : ";
				cin>>karakter;
				cout<<"Hasil konversi ke dalam bentuk ASCII : "<<int(karakter)<<endl;
				cout<<"------------------------------------------------------" <<endl<<endl;
				cout << "Menghitung Kunci Publik (Pengirim)" << endl << endl;  
		        cout << "Masukkan nilai g                 : ";  
		        cin >> m;  
		        cout << endl << "Masukkan kunci privat (Pengirim) : ";  
		        cin >> n;  
		        for (int i = 1; i <= n; i++) {  
		            total = total * m;  
		        }  
        
		        cout << "\nBilangan pemodulo (p)            : ";
		    	cin >> pemodulo;
		    	
		    	pengirim = total % pemodulo;
		    	
		    	cout<<"\n-----------------------------------------------------" << endl;
		        cout << endl << "Kunci publik (Pengirim) = g^x mod (p)"<<endl;
				cout <<"                        = (" << m << " )^" << n << " mod " << pemodulo  <<endl;
				cout <<"                        = " << pengirim << endl; 
				
				
				endl (cout);
				
				cout<<"------------------------------------------------------" << endl;
				cout<<"Pengirim dan Penerima melakukan pertukaran kunci publik"<<endl;
				cout<<"Menghitung Kunci Enkripsi-Deskripsi"<<endl;
				cout<<"Masukkan Kunci Publik Penerima   : ";
				cin>>penerima;
				cout<<"Masukkan kunci privat kembali : ";
				cin>>x;
				
		      	for (int j = 1; j<= x; j++) {
		      		enkrip = enkrip * penerima;
				  }
		        
		        key = enkrip % pemodulo;
		    
		    	cout<<"\nKunci Enkripsi-Deskripsi = Kunci Publik (Penerima) ^ Kunci Privat (Pengirim) mod (p)"<<endl;
		      	cout<<"                         = (" << penerima << ")^" << n << " mod "<< pemodulo <<endl;
		      	cout<<"                         = " << key <<endl;
		      	
		      	endl (cout);
		      	
		      	cout<<"------------------------------------------------------" << endl;
		      	cout<<"\nProses Enkripsi = Pesan XOR Kunci Enkripsi Deskrpsi"<<endl;
		      	chiper = int(karakter) ^ key;
		      	cout<<"		= "<<chiper<<endl;
		      	cout<<"Hasil Enkripsi dari Pesan "<<karakter<<" adalah : "<<char(chiper)<<endl;
		      	
		      
		      
		break;
		case 2 :
      			
      			cout<<"Masukkan Pesan yang akan dideskripsi : ";
				cin>>karakter;
				cout<<"Hasil konversi ke dalam bentuk ASCII : "<<int(karakter)<<endl;
				cout<<"------------------------------------------------------" <<endl<<endl;
				cout << "Menghitung Kunci Publik (Penerima)" << endl << endl;  
		        cout << "Masukkan nilai g                 : ";  
		        cin >> m;  
		        cout << endl << "Masukkan kunci privat (Penerima) : ";  
		        cin >> n;  
		        for (int i = 1; i <= n; i++) {  
		            total = total * m;  
		        }  
        
		        cout << "\nBilangan pemodulo (p)            : ";
		    	cin >> pemodulo;
		    	
		    	pengirim = total % pemodulo;
		    	
		    	cout<<"\n-----------------------------------------------------" << endl;
		        cout << endl << "Kunci publik (Penerima) = g^x mod (p)"<<endl;
				cout <<"                        = (" << m << " )^" << n << " mod " << pemodulo  <<endl;
				cout <<"                        = " << pengirim << endl; 
				
				
				endl (cout);
				
				cout<<"------------------------------------------------------" << endl;
				cout<<"Pengirim dan Penerima melakukan pertukaran kunci publik"<<endl;
				cout<<"Menghitung Kunci Enkripsi-Deskripsi"<<endl;
				cout<<"Masukkan Kunci Publik Pengirim  : ";
				cin>>penerima;
				cout<<"Masukkan Kunci privat kembali : ";
				cin>>y;
				
		      	for (int j = 1; j<= y; j++) {
		      		enkrip = enkrip * penerima;
				  }
		        
		        key = enkrip % pemodulo;
		    
		    	cout<<"\nKunci Enkripsi-Deskripsi = Kunci Publik (Pengirim) ^ Kunci Privat (Penerima) mod (p)"<<endl;
		      	cout<<"                         = (" << penerima << ")^" << n << " mod "<< pemodulo <<endl;
		      	cout<<"                         = " << key <<endl;
		      	
		      	endl (cout);
		      	
		      	cout<<"------------------------------------------------------" << endl;
		      	cout<<"\nProses deskripsi = Pesan XOR Kunci Enkripsi Deskrpsi"<<endl;
		      	chiper = int(karakter) ^ key;
		      	cout<<"		= "<<chiper<<endl;
		      	cout<<"Hasil deskripsi dari Pesan "<<karakter<<" adalah "<<char(chiper)<<endl;
		      	
      		}
      		
      		
    	system("pause");
        getch();  
    }  
