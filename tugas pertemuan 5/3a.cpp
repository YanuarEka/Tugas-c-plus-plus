#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char name[30]; // mendeklarasikan tipe data char dengan variabel name yg panjangnya 30
    strcpy(name, "Nama : Yanuar Eka Susila"); //menyalin string strcpy kedalam variabel name, yang isinya Nama : Yanuar Eke Susila
    cout<<name; // mencetak variabel name
    
    return 0;
}
