#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    float harga_barang, total_bayar, diskon, jumlah_barang;
    string beli;

    cout<<"============================="<<endl;
    cout<<"Masukan Harga Barang : ";
    cin>>harga_barang; 
    cout<<"Masukan Jumlah Barang : ";
    cin>>jumlah_barang;

    if (jumlah_barang>100){
        cout<<"Mendapatkan diskon 15 %"<<endl;
        diskon=harga_barang*0.15;
    }else{
        cout<<"Mendapatkan diskon 5 %"<<endl;
        diskon=harga_barang*0.05;
    }
    total_bayar=harga_barang-diskon;
    cout<<"Total bayar : "<<total_bayar;
    cout<<endl;

    cout<<"Beli barang Ya/Tidak : ";
    cin>>beli;

    if (beli=="Ya"){
        cout<<"Berhasil dibeli";
    }else if(beli=="Tidak"){
        cout<<"Tidak Berhasil dibeli";
    }

    cout<<endl;
    cout<<"=============================";

    getch ();
}


