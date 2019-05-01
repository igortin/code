#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

void print_cnt(string name, map<string, string> n){
	cout << n[name] << '\n';
}
int main() {
	map<string,string> n;
	string cnt, str, name = "";
	int N, k; cin >> N;
	for (int i = 0; i < N; ++i){
		cin >> cnt;
		getline(cin, str);
		int j = 0;
		while (j <= str.size()) {
			if (str[j] != 32 and j < str.size()) { name += str[j];}
			else {
				if (n.find(name) == n.end()) {n[name] = cnt;}
				name = "";
			}
			++j;
		}
	}
	cin >> k;
	for (int i = 0; i < k; ++i){
		cin >> name;
		print_cnt(name,n);
	}
	return 0;
}
