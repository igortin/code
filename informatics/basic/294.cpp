#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>

using namespace std;
int main() {
    int a,b,c;
    int n;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a >= b){
      n = a;
    }
    else {
      n = b;
    }

	  if (c > n){
      cout << c << '\n';
    }
    else {
      cout << n << '\n';
    }
	return 0;
}
