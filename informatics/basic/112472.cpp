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
	set<int> N; 
	

	for (int i = 0; i < s.length(); ++i) { if (s[i] - 48 >= 0 and s[i] - 48 <= 9 ){
			n.push_back(s[i]-48); 
			N.insert(s[i]-48);
		}}
	if (n.size() > N.size()){ 
		for ( std::set<int>::iterator it = N.begin(); it!=N.end() ; ++it){ 
			int c = 0;
			for (int a = 0; a < n.size(); ++a){ 
				if (n[a] == *it){ ++c; } 

				if (c > 1) {cout << n[a]; break;}}}}
			
				
	
	
	else { cout << "NO" << '\n' ;} 
	return 0;}