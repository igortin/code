#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;
int main() {
	int x;
	cin >> x;
	int n = 1;
	if (x == 1) {
		cout << 0 << '\n';
	}
	else if (x == 2) {
		cout << 1 << '\n';
	}
	else {
		for (int i = 2; i <= x; i = i * 2){
			n++;
			if (2*i >= x) { cout << n << '\n'; break; }
		}
	}

	return 0;
}
