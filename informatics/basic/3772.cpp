#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <map>
#include <set>

using namespace std;
map<string,string> map_test;
map<string,string> n;
set<string> man;



void create_cp(int N){
	string p,c; 
	for (int i=0; i < N - 1; ++i){
		cin >> c >> p; 
		n[c] = p;
	}



}
int f(string c,string p){
	// if (n.find(c) == n.end()) { return 0; }
	// if (n[c] == p) {cout << p << ' ' << n[c] << '\n'; return 1;}
	// 	cout << p << ' ' << n[c] << '\n';
	// 	return f(n[c], p);}
	if (n.find(c) == n.end()) { return 0; }
	if (n[c] == p) { return 1;} 
		// cout << p << ' ' << n[c] << '\n';
		return f(n[c], p);}




int main() {
	int N; 
	map<string,string>::iterator it;
	string p,c;
	cin >> N;
	create_cp(N);
	// while (cin >> p >> c) { map_test[c] = p;}
	// for (it = map_test.begin(); it != map_test.end(); ++it){
	// 	// cout << (*it).first << ' ' << (*it).second << ' ';
		
	// 	if ( f((*it).first,(*it).second) == 1 ) {cout << 1 << '\n';}
	// 	else if ( f((*it).second,(*it).first) == 1 ) {cout << 2 << '\n';} 
	// 	else { cout << 0 << '\n';}

	while (cin >> p >> c) { // map_test[c] = p;}
	// for (it = map_test.begin(); it != map_test.end(); ++it){
		// cout << (*it).first << ' ' << (*it).second << ' ';
		if ( f(c, p) == 1 ) {cout << 1 << ' ';}
		else if ( f(p,c) == 1 ) {cout << 2 << ' ';} 
		else if (f(c,p) == 0 or f(p,c) == 0 ){ cout << 0 << ' ';}
		} return 0; }