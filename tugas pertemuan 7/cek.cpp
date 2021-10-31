#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	int pilih, jumlah, no, nomer, pin;
	string pembayaran, bayar, metode, ovo, dana, gopay, bank, tidak;

	cout<<"SISTEM CEK TAGIHAN PEMBAYARAN UNIVERSITAS PAMULANG"<<endl;
	cout<<endl;
    cout<<"*******************************************************"<<endl;
	cout<<"No   Tagihan          Pembayaran            Jumlah Bayar "<<endl;
	cout<<"1.   2110114010       Registrasi            Rp:600.000"<<endl;
	cout<<"2.   2110114011       Angsuran 2            Rp:200.000"<<endl;
	cout<<"3.   2110114012       Angsuran 3            Rp:200.000"<<endl;
    cout<<"4.   2110114013       UTS                   Rp:250.000"<<endl;
	cout<<"1.   2110114010       Registrasi            Rp:600.000"<<endl;
	cout<<"2.   2110114011       Angsuran 2            Rp:200.000"<<endl;
	cout<<"3.   2110114012       Angsuran 3            Rp:200.000"<<endl;
    cout<<"4.   2110114013       UTS                   Rp:250.000"<<endl;
	cout<<"*******************************************************"<<endl;
	cout<<endl;
	cout<<"-------------Cek Tagihan------------"<<endl;
	cout<<"Pilih No Untuk Mengecek Tagihan : ";
	cin>>no;
	
	if (no==1)
	{
		pilih=2110114010;
		jumlah=600000;
		pembayaran="Registrasi";
	}
	else if (no==2)
	{
		pilih=2110114011;
		jumlah=200000;
		pembayaran="Angsuran 2";
	}
	else if (no==3)
	{
		pilih=2110114012;
		jumlah=200000;
		pembayaran="Angsuran 3";
	}
    else if (no==4)
	{
		pilih=2110114013;
		jumlah=250000;
		pembayaran="UTS";
	}
	cout<<"Pembayaran "<<pembayaran<<" dengan jumlah Rp: "<<jumlah<<""<<endl;
    cout<<endl;
    cout<<"******************Pembayaran*********************"<<endl;
    cout<<"Masukan Tagihan yang ingin di bayar : ";
	cin>>pilih;
	cout<<"Lanjutkan Pembayarana Bayar|Batal : ";
	cin>>bayar;

	if(bayar=="Bayar"){
		cout<<"Tagihan : "<<pembayaran<<endl;
		cout<<"Tagihan Pembayaran "<<pembayaran<<" Dengan Jumlah RP : "<<jumlah<<endl;
		cout<<"Pilih Pembayaran Ovo|Dana|Gopay|Bank : ";
	    cin>>metode;
	}else if(bayar=="Batal"){
		cout<<"Dibatalkan";
	}

	if (metode=="Ovo")
	{
		cout<<"Masukan No Ovo : ";
		cin>>nomer;
		cout<<"Masukan Pin : ";
		cin>>pin;
		cout<<"Tagihan : "<<pilih<<" Jumlah Yang Dibayar "<<jumlah<<" Pembayaran "<<pembayaran<<endl;
		cout<<"Transaksi Sedang Diproses"<<endl;
	    cout<<"Pembayaran melalui "<<metode<<" Berhasil ";
	} else if (metode=="Dana"){
		cout<<"Masukan No Dana : ";
		cin>>nomer;
		cout<<"Masukan Pin : ";
		cin>>pin;
		cout<<"Tagihan : "<<pilih<<" Jumlah Yang Dibayar "<<jumlah<<" Pembayaran "<<pembayaran<<endl;
		cout<<"Transaksi Sedang Diproses"<<endl;
	    cout<<"Pembayaran melalui "<<metode<<" Berhasil ";
	} else if (metode=="Gopay"){
		cout<<"Masukan No Gopay : ";
		cin>>nomer;  
		cout<<"Masukan Pin : ";
		cin>>pin;
		cout<<"Tagihan : "<<pilih<<" Jumlah Yang Dibayar "<<jumlah<<" Pembayaran "<<pembayaran<<endl;
		cout<<"Transaksi Sedang Diproses"<<endl;
	    cout<<"Pembayaran melalui "<<metode<<" Berhasil ";
	} else if (metode=="Bank"){
		cout<<"Masukan Bank : ";
		cin>>nomer;
		cout<<"Masukan Pin : ";
		cin>>pin;
		cout<<"Tagihan "<<pilih<<" Jumlah Yang Dibayar "<<jumlah<<" Pembayaran "<<pembayaran<<endl;
		cout<<"Transaksi Sedang Diproses"<<endl;
	    cout<<"Pembayaran melalui "<<metode<<" Berhasil ";
	}
	
	cout<<endl; 
	cout<<"*******************Pembayaran********************";

	getch();
}