#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>

using namespace std;
int main() {
    int a, b, a1, b1;
    cin >> a; cin >> b; cin >> a1; cin >> b1;
    if      (a == a1 + 1 and b == b1 + 2 ) { cout << "YES"<< '\n'; } 
    else if (a == a1 - 1 and b == b1 + 2 ) { cout << "YES"<< '\n'; }

    else if (a == a1 + 1 and b == b1 - 2 ) { cout << "YES"<< '\n'; }
    else if (a == a1 - 1 and b == b1 - 2 ) { cout << "YES"<< '\n'; }
	else if (a == a1 + 2 and b == b1 + 1 ) { cout << "YES"<< '\n'; }
	else if (a == a1 - 2 and b == b1 + 1 ) { cout << "YES"<< '\n'; }
	else if (a == a1 + 2 and b == b1 - 1 ) { cout << "YES"<< '\n'; }
	else if (a == a1 - 2 and b == b1 - 1 ) { cout << "YES"<< '\n'; }
	else {cout << "NO" << '\n';}
	return 0;}