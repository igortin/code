#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <vector>

using namespace std;
int main() { 
	string s; 
	getline(cin,s); 
	vector<int> n; 
	for (int i = 0; i < s.length(); ++i) { 
		if (s[i] - 48 >= 0 and s[i] - 48 <= 7){ 
			n.push_back(s[i]-48);
		             }
	}
		if ( (n.size() == s.size() or (s[0] == '-' and n.size() + 1 == s.size())) and n[0] != 0 ){ cout << "YES" << '\n';}
		else { cout << "NO" << '\n';} 
	return 0; 
	}