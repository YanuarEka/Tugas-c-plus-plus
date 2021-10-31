  /*Contoh Program Menggunakan Fungsi atof*/
   #include <stdio.h>
   #include <conio.h>
   #include <math.h>
   #include <iostream>

   using namespace std;

    int main()
    {
     char kata[20];
     float angka,a, b;
     system("cls");
    /*Proses Input Angka*/
     cout<<"Masukkan Angka = ";
     gets(kata);
     angka = atof(kata);
     a=angka - 10;
    /*Output*/
     cout<<"Hasil perubahan dikurangi dengan 10 = "<<a;
     getch();
  }