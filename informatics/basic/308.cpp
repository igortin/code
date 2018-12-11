#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;
bool Xor(bool x, bool y) { if (x == y) {cout << x - y << '\n';} else {cout << x + y << '\n';}
    return 0;}

 
    




int main() { bool x; bool y; cin >> x, cin >> y; Xor(x, y); return 0;}