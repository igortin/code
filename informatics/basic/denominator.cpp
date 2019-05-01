#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;





int main(){
 	int n;
  int m;
  div_t k;
  cin >> n;
  cin >> m;
  k = div(m, n);
  double k0 = k.rem / (double)n;
  int K = k.quot + ceil(k0);
  cout << K << '\n';
  return 0; }
