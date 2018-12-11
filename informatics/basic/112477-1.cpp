#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <vector>

using namespace std;
int main() { 
	string s; 
	getline(cin,s); 
	set<char> n; string S = "";
	for (int i = 0; i < s.length(); ++i){ 
		if (n.find(s[i]) == n.end()) {S += s[i];}
		n.insert(s[i]);
        }
	cout << S << '\n'; // 	for (std::set<char>::iterator it = n.begin(); it != n.end() ; ++it){ cout << *it << ' ';}
	return 0; }