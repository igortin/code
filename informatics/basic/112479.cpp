#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <vector>

using namespace std;
int main() { 
	string s; getline(cin,s); 
	vector<int> N; set<int> NN;
	for (int i = 0; i < s.length(); ++i) { if (s[i] - 48 >= 0 and s[i] - 48 <= 9 ){ N.push_back(s[i]-48);}}
	for (int i = 0; i < 10; ++i) { NN.insert(i);}
	
	for (int i = 0; i < N.size(); ++i) { NN.erase(N[i]);}
	if (!NN.empty()) { 
		for (std::set<int>::reverse_iterator it = NN.rbegin(); it != NN.rend(); ++it){ cout << *it;}}
	else {cout << "NO";}
			
	return 0;}