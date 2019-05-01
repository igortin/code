#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;
int main() {
  int a,b,c,d;
  cin >> a;
  cin >> b;
  cin >>c,
  cin >> d;
  int K = a * 100 + b;
  int N = c * 100 + d;
  div_t rest = div(N - K,100);
  cout << rest.quot << ' ';
  cout << rest.rem << '\n';
  return 0;
}
