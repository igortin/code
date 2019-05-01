#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <vector>

using namespace std;
int main() {
	string s0,s1,s;
	set<char> N,NN;
	getline(cin,s0);
	getline(cin,s1);
	s0 = s0 + s1;
	for (int i = 0; i < s0.size(); ++i) { N.insert(toupper(s0[i]));}
	for (char j = 'A'; j <= 'Z'; ++j) { NN.insert(j);}
	for (std::set<char>::iterator it = NN.begin(); it != NN.end(); ++it){
		if ( N.find(*it) == N.end() ) { s += *it;}
	}
	if (s.length() > 0) {cout << s << '\n';}
	else {cout << 0;}
	return 0;

	}
