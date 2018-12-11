#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;
int main() {
    int x; cin >> x; for (int i = 1; i <= x; ++i) { if (i != 1 and x % i == 0) {cout << i << '\n'; break;} }
    return 0;}