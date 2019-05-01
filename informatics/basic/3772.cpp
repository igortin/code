#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <map>
#include <set>

using namespace std;
map<string,string> map_test; map<string,string> n; set<string> man;

void create_cp(int N){
	string p,c;
	for (int i=0; i < N - 1; ++i){
		cin >> c >> p;
		n[c] = p;
	}
}


int f(string c,string p){
	if (n.find(c) == n.end()) { return 0; }
	if (n[c] == p) { return 1; }
		return f(n[c], p);
}
int main() {
	int N; 	string p,c; map<string,string>::iterator it;
	cin >> N;
	create_cp(N);
	while (cin >> p >> c) {
		if ( f(c, p) == 1 ) { cout << 1 << ' '; }
		else if ( f(p,c) == 1 ) { cout << 2 << ' '; }
		else if (f(c,p) == 0 or f(p,c) == 0 ){ cout << 0 << ' '; }
	}
	return 0;
}
