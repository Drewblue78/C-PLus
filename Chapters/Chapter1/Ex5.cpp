#include <iostream>
using namespace std;
void changeChar()
{
  char c;
  cout << "char default value is: " << c << '\n';
  cout << "Enter a character";
  cin >> c;
  cout << '  ' << c << ' ' << c << ' ' << c << '\n';
  cout << ' ' << c << '   ' << c << '\n';
  cout << c << '\n';
  cout << c << '\n';
  cout << c << '\n';
  cout << c << '\n';
  cout << c << '\n';
  cout << ' ' << c << '   ' << c << '\n';
  cout << '  ' << c << ' ' << c << ' ' << c << '\n';
}