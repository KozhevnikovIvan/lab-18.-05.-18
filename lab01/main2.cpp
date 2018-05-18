#include <math.h>
#include <iostream>
using namespace std;
float degree(float number, float degree) { return (pow(number, degree)); }
int main() {
  float a, b;
  cout << "введите число ";
  cin >> a;
  cout << "введите степень ";
  cin >> b;
  cout << degree(a, b);
}
