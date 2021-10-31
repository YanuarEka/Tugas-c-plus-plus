//Algo no 1.
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    int bil;
    string bil_positive_negative;

    cout<<"=========CEK BILANGAN========="<<endl;
    cout<<"Masukan Angka : ";
    cin>>bil;

    if (bil>0){
        bil_positive_negative="Bilangan Positive";
    } else if (bil<0){
        bil_positive_negative="Bilangan Negative";
    }

    cout<<"Hasil : "<<bil_positive_negative;
    cout<<endl;
    cout<<"=========CEK BILANGAN=========";
    
    getch(); 
}