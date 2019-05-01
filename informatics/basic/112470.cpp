#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <vector>

using namespace std;
int main() { string s; int c = 0;
	getline(cin,s);
	vector<char> chars;
	string alhabet = ".,;:!?";
	for (int i = 0; i < s.size(); ++i){
		if (s[i] != ' '){
			chars.push_back(tolower(s[i]));
		}
	}
	for (int i =0; i < alhabet.size(); ++i) {
		for (int k = 0; k < chars.size(); ++k){
			if (alhabet[i] == chars[k]){
				 ++c;
			}
		}
	}
	cout << c << '\n'; return 0;
}
