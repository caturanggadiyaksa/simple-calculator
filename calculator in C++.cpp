#include <iostream>
using namespace std;
int main() {
  
  int angka1, angka2;
  char tanda;

  cout << "Masukan Angka Pertama:";
  cin >> angka1;
  
  cout << "Masukan Angka kedua:";
  cin >> angka2;
  
  cout << "Silahkan pilih operator yang anda inginkan (+, -, /, *):";
  cin >> tanda;
  
  if (tanda == '+')
    cout << "Addition/Penjumlahan =" << angka1 + angka2 << endl;
  else if (tanda =='-')
    cout <<"Subtraction/pengurangan =" << angka1 - angka2 << endl;
  else if (tanda == '/')
    cout << "Division/pembagian =" << angka1 / angka2 << endl;
   else if (tanda == '*')
    cout << "Multiplication/perkalian = " << angka1 * angka2 << endl;
  else
    cout << "invalid operator";


  return 0;
} 
