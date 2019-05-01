#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <map>
#include <set>

using namespace std;
map<string,string> n; map<string,int> mem; set<string> man;
void create_cp(int N){
	string p,c;
	for (int i=0; i < N; ++i){
		cin >> c >> p;
		n[c] = p;
		man.insert(c);
		man.insert(p);
	}
}


int f(string c){
	if(n.find(c) == n.end()) return 0;
	return f(n[c]) + 1;
}

int main() {
	int N, count; set<string>::iterator it;
	cin >> N;
	create_cp(N);
	for (it = man.begin(); it != man.end(); ++it){ cout << *it << " " << f(*it) <<  '\n'; }
	return 0;
}
