#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;
bool Prostoe(int a) {
	if (a > 3){
		for (int i = 2; i <= sqrt(a); ++i ) {
			if (a % i == 0) {
				cout << "composite" << '\n'; break;
			}
			if (i + 1 > sqrt(a)){ cout << "prime" << '\n'; }
		}
	}
	else { cout << "prime" << '\n';}
	return 0;
}
int main() {
	int a; cin >> a; Prostoe(a);
	return 0;
}
