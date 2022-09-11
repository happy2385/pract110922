#include <iostream>     
#include <iomanip>      
using namespace std;
int main () 
{
  double float_value = 3.14159;
  cout << setw(8) << 22 << "\n";
  cout << setw(8) << 4444 << "\n";
  cout << setw(8) << 666666 << endl;
  cout << setprecision(5) << 12.345678 << "\n";
  cout << setprecision(3) << 12.345678 << "\n";
  cout << setprecision(2) << 12 << "\n";
  cout << setprecision(4) << float_value << '\n';
  cout << setprecision(9) << float_value << '\n';
  cout << fixed;
  cout << setprecision(6) << float_value << '\n';
  cout << setprecision(10) << float_value << '\n';
  return 0;
}