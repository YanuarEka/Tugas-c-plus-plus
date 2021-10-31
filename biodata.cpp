#include <iostream>

using namespace std;

int main(){
 
  // deklarasi tipe data variabel
  string nama;
  string kelas;
  int nim;
  char jenis_kelamin;
 
  // --- proses input ---
  cout << "Siapa namamu?" << endl;
  cout << "jawab: ";
  getline(cin,nama);

  cout << "Kelas apa?" << endl;
  cout << "jawab: ";
  getline(cin,kelas);
 
  cout << "Nimnya berapa?" << endl;
  cout << "jawab: ";
  cin >> nim;
 
  cout << "Jenis kelamin [L/P]: ";
  cin >> jenis_kelamin;
 
  // --- proses output ---
  cout << "Salam kenal, " << nama << " Sekarang kamu berada di Kelas ";
  cout << kelas << " Nimnya adallah " ;
  cout << nim << " dan kamu berjenis kelamin "<< jenis_kelamin;
 
  return 0;

}