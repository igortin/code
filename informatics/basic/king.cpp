#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>

using namespace std;



int main() {
    int a, b, a1, b1;
    cin >> a;
    cin >> b;
    cin >> a1;
    cin >> b1;
    if (( abs(a1 - a) == 1 and b1 == b) or ( abs(b1 - b) == 1 and a1 == a) or ( abs(a1 - a) == 1 and abs(b1 - b) == 1)){
    	cout << "YES"<< '\n';
    } else {
      cout << "NO"<< '\n';
    }
	return 0;
}
