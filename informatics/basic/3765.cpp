#include <iostream>
#include <stdio.h>
// #include <algorithm>
// #include <vector>
#include <map>

using namespace std;
void print_cnt(string name, map<string, string> n){
	cout << n[name] << '\n';}

int main() { 
	map<string,string> n;  
	string cnt, str, name = ""; 
	int N, k; 
	cin >> N;
	for (int i = 0; i < N; ++i){
		cin >> cnt;
		// cin.ignore();
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
	
	// map<string,string>::iterator it;	
	// for (it=n.begin(); it != n.end(); ++it) { cout << (*it).first << ' ' << (*it).second << '\n';}
	cin >> k; 
	for (int i = 0; i < k; ++i){ 
		cin >> name;
	
		print_cnt(name,n);}
	return 0;
 }