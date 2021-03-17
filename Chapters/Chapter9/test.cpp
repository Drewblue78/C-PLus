#include <iostream>
using namespace std;

main() {
  main(double v1, double *p1);
  v1 = 0;
  p1 = &v1;
  *p1 = 42;
  cout << v1 << endl;
  cout << *p1 << endl;
}
