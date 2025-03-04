#include <iostream>
using namespace std;

// program untuk menghitung luas persegi panjang 
int main() 
{ // begin

 // numeric(float, double, int) nPanjang, nLebar, nLuas
 float panjang, lebar, luas;
 // display 'masukan panjang : '
 cout << "masukkan panjang : ";
 // accept nPanjang
 cin >> panjang;
 // display 'masukan lebar : '
 cout << "Masukkan Lebar : ";
 // accept nLebar
 cin >> lebar;
 // compute nLuas = nPanjang * nLebar
 luas = panjang * lebar;
 // display 'Luas persegi panjang = ' + nLuas 
 cout << "luas persegi panjang = " << luas << endl;

}  // end