#include<iostream>
using namespace std;
int main (){
 int kode,harga,jumlah,total,bayar,kembali,ongkir,diskon,jarak;
 char mad;
 do 
 {
 cout<<"============================"<<endl;
 cout<<"Menu Makanan Kafe cetol"<<endl;
 cout<<"============================"<<endl;
 cout<<""<<endl;
 cout<<"Menu Makanan Harga"<<endl;
 cout<<"1. Ayam Geprek  Rp.21.000"<<endl;
 cout<<"2. Ayam Goreng  Rp.17.000"<<endl;
 cout<<"3. Udang Goreng Rp.19.000"<<endl;
 cout<<"4. Cumi Goreng  Rp.20.000"<<endl;
 cout<<"5. Ayam Bakar   Rp.25.000"<<endl;
 cout<<"============================"<<endl;
 cout<<'\n'<<"Masukan No Menu Pilihan : ";
 cin>>kode;
 switch (kode){
 case 1:
  cout<<'\n'<<"Ayam Geprek"<<endl;
  harga=21000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 case 2:
  cout<<'\n'<<"Ayam Goreng"<<endl;
   harga=17000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 case 3:
  cout<<'\n'<<"Udang Goreng"<<endl;
   harga=19000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 case 4:
  cout<<'\n'<<"Cumi Goreng"<<endl;
   harga=20000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
   	
	   	if(jarak <= 3){
		ongkir = 15000;
	}
	else if(jarak >= 3){
		ongkir = 25000;
	}
		if(total > 25000){
			ongkir-=3000;
		}else if(total > 50000){
			ongkir-=5000;
			diskon = total * (10/100);		
		}else if(total > 150000){
			ongkir-=8000;
			diskon = total * (35/100);
		}
  
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Ongkir	: "<<ongkir<<endl;
  cout<<"Diskon	: "<<diskon<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
  case 5:
  cout<<'\n'<<"Ayam Bakar"<<endl;
   harga=25000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 default:
 cout<<"Kode yang anda masukkan tidak ada";
 }
 } 
 while (mad/='Y');
 cout<<"Terimah Kasih Atas Kunjungan Anda"<<endl;
 return 0;
}
