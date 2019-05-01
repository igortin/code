#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;

int main(){
    int k,m,n;
    cin >> k >> m >> n;
    div_t N = div(n,k);
    if (n > k) {
    	if ( N.rem == 0 ) {
        cout << 2 * m * (N.quot)<< '\n';
      }
      else {
        if (N.rem <= (float) k/2){
          cout << 2 * m * (N.quot) + m << '\n';
        }
    		else {
          cout << 2 * m * (N.quot) + 2 * m << '\n';
        }
      }
    } else {
    cout << 2 * m << '\n';
  }
  return 0; }
