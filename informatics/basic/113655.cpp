#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;



string f(string n, int k, string N){
	if (k == n.size() - 1) {
		cout << n[k] << '\n';
		return N;
	}
	else if (k < n.size() - 1){
		cout << n[k] << '*';
	}
	return f(n,++k, N);
}
int main() {
	string n; cin >> n;
	int k = 0; string N = "";
	f(n, k, N);
	return 0;
}
