#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int angka;
    
    cout<<"Masukan Angka : ";
    cin>>angka;

    if (angka%2==0){
        cout<<"Hasil : "<<angka<<" Bilangan Genap";
    }else {
        cout<<"Hasil : "<<angka<<" Bilangan Ganjil";
    }

    getch();
}