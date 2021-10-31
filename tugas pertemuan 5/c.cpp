#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main ( ) {
    float sudut; // mendeklarasikan dengan tipe data float dengan isi berupa variabel sudut
    system ("cls"); 
    cout << "Menghitung nilai sinus\n "; // mencetak menghitungh nilai sinus dengan membuat line baru
    cout << "Masukkan sudut : "; // mencdetak masukan sudut : 
    cin >> sudut; // mengambil masukan dari yg di inputkan 
    cout << "Nilai sinus " << sudut << " derajat adalah " << sin(sudut); // mencetak nilai sinus yang di inputakan tadi 
    getch ( );
}
