#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;
int main() {
    int a;
    cin >> a;
    int n = a;
	  for ( int k = 1 ; k <= n; ++k ){
		    if ( a % k == 0) {
          cout << k << " ";
        }
      }
    return 0;
}
