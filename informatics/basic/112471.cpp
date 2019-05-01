#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <vector>

using namespace std;
int main() {
	string s;
	getline(cin,s);
	set<char> n;
	for (int i = 0; i < s.length(); ++i){
		if (s[i] - 48 >= 0 and s[i] - 48 <= 9 ){
			n.insert(s[i]);
		}
	}


	if (n.size() > 0 ){
		for ( std::set<char>::iterator it = n.begin(); it!=n.end() ; ++it){
			cout << *it;
		}
	}
	else {
		cout << "NO" << '\n';
	}
	return 0;
}
