#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;
int *pref(string s){
	int *p = new int[s.size()];
	p[0] = 0;
	for(int i = 1; i < s.size(); ++i){
		int j = p[i-1];

		while(j > 0 && s[i] != s[j]){
			j = p[j-1];
		}
		if(s[i] == s[j]){
			j = j + 1;
		}
		p[i] = j;
	}
	return p;
}
int main() {
  int n; int count = 0; cin >> n;
	string text; string pattern; string s; vector<int> v;
	int i = 0;
	while (i < n){
		cin >> text >> pattern;
		s = pattern + '!' + text;  -----------------------------
		int *ptr = pref(s);
		for (int k = 0; k < s.size(); k++){ -------------
			if (ptr[k] == pattern.length()) {	count = count + 1; v.push_back(k - pattern.length() + 1 - pattern.length());} 
		}
		if (count != 0) cout << count << '\n';
		else  { cout << '\n'; cout << "Not Found" << '\n';}
		for (int k = 0; k < v.size(); k++){ cout << v[k] << ' ';} 
		cout << '\n';
		i++; v.clear(); delete ptr; count = 0;} 
		return 0;}
