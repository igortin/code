#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;


string f(string n,int i, int j, string N){
	if (i == 0 or j == n.size() - 1) {
		if ( (int) n[i] != (int) n[j] ) {
			N = n[i] + N + n[j];
		}
		return N;
	}
	if ( (int) n[i] != (int) n[j] ){
		N = n[i] + N + n[j];
	}
	return f(n,--i,++j, N);
}
int main() {
	string n; cin >> n;
	string N;
	int i;
	int j;
	div_t v = div(n.size(), 2);
	if (v.rem == 1) {
		N = n[v.quot];
		i = v.quot - 1; j = v.quot + 1;
	}
	if (v.rem == 0) {
		N = "";
		i = v.quot - 1;
		j = v.quot;
	}
	cout << f(n,i,j,N) << '\n';
	return 0;
}
