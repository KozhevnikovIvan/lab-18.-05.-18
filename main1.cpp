#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cout << "введите a" << endl;
  cin >> a;
  cout << "введите b" << endl;
  cin >> b;
  cout << "введите c" << endl;
  cin >> c;
  if ((a > b & a < c) || (a<b & a> c)) cout << "медиана = a";
  if ((b > a & b < c) || (b<a & b> c)) cout << "медиана = b";
  if ((c > a & c < b) || (c<a & c> b)) cout << "медиана = c";
}
