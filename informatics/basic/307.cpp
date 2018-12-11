#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;
double power(double a, int n) {
    double t = a; 
    if (n == 0){ cout << 1 << '\n';}
    else {for (int i = 1; i < n; ++i){ a *= t;}; cout << a << '\n';} return a;}
    




int main() { double a; int n;  cin >> a; cin >> n; power(a, n); return 0;}