#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>

using namespace std;
int main() {
  int N, n, t;
  cin >> N;
  cin >> n;
  if ( N == 1 and n == 1){ cout<< "YES" << '\n'; }
  else if ( N != 1 and n != 1){ cout<< "YES" << '\n'; }
  else { cout << "NO" << '\n'; }
	return 0;
}
