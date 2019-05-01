#include <iostream>
#include <stdio.h>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	set <int> n, m;
	vector<int> v;
	string str;
	int res = 0;
	set<int>::iterator it;
	freopen("input.txt","r",stdin);
	getline(cin, str);
	for (int i = 0; i <= str.length(); ++i){
		if (str[i] != 32 and i != str.length()){
			res = res * 10 + str[i]- 48;
		}
		else {
			 n.insert(res); res = 0;
		 }
	 }
	getline(cin, str);
	for (int i = 0; i <= str.length(); ++i) {
		if (str[i] != 32 and i != str.length()) {
			res = res * 10 + str[i]- 48;}
		else { m.insert(res); res = 0;}
	}

	set_intersection(n.begin(), n.end(), m.begin(), m.end(), std::back_inserter(v));
	sort(v.begin(),v.end());
	for (int i=0; i < v.size(); ++i) { cout << v[i] << ' ';}


	return 0;
}
