#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;
int main() {
    int a,b,c,n;
    cin >> a; 
    cin >> b; 
    cin >> c; 
    cin >> n; 

    for ( a ; a <=  b; ++a ){
        if ( a % n == c ){ 
            cout << a << " ";
        }
    }
    return 0;}