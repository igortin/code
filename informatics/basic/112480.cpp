#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
	string s0,s1,s;
	getline(cin,s0);
	getline(cin,s1);
	set<char> N, NN;
	for (int i = 0; i < s0.length(); ++i) {
		N.insert(s0[i]);
	}
	for (int j = 0; j < s1.length(); ++j) {
		NN.insert(s1[j]);
	}
	for (std::set<char>::iterator it = N.begin(); it != N.end(); ++it){
		if ( NN.find(*it) != NN.end() ) {
			s +=*it;
		}
	}
	if (s.length() > 0) {
		cout << s;
	}
	else {cout << "NO";}
	return 0;
}
