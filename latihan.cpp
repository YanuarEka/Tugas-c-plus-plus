#include <iostream>
using namespace std;
main()
{ int A = 5, B = 2, X; // mendeklarasikan Variabel A yang nilainya 5, Variabel B yang nilainya 2, dan Variabel X dengan tipe data integer
X = A; // mengisi nilai variabel X dengan variabel A yang nilainya 5 jadi variabel X telah mempunyai nilai 5
A = B; // merubah nilai variabel A = 5 dengan variabel B yang nilainya 2 jadi isi nilai variabel A telah merubah menjadi 2
B = X; // merubah nilai variabel B = 2 dengan nilai variabel X yang nilainya 5, jadi isi nilai dari Variabel B telah berubah menjadi 5
cout<<A <<endl; // niai variabel A kemudian cetak dan hasilnya 2
cout<<B; // nilai variabel B kemudian cetak dan hasilnya 5
} 