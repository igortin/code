#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;
int main() {
    int a; cin >> a; int n = sqrt(a); 
   	for ( int k = 2 ; k <= n; ++k ){ if ( a % k == 0 and a / k < n ) { n = k;}} 
   	   cout << n << " "; return 0; }