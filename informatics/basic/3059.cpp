#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;
int main() {
    int x; cin >> x; for (int i = 1; pow(2,i) < x; ++i) { cout << pow(2,i) << '\n'; }
    return 0;}