#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>


using namespace std;


bool Xor(bool x, bool y, bool z) {
  if (x == y and y == z) {
    cout << x << '\n';
  } else {
    cout << !(x ^ z ^ y)<< '\n';
  }
  return 0;
}
int main() {
  bool x;
  bool y;
  bool z;
  cin >> x,
  cin >> y;
  cin >> z;
  Xor(x, y, z);
  return 0;
}
