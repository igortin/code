#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    int a,b;
    cin >> a;
    cin >> b;

    if (a > b) {
      cout << 1 << '\n';
    }
    else if (b > a){
      cout << 2 << '\n';
    }
	  else {
       cout << 0 << '\n';
     } return 0;
   }
