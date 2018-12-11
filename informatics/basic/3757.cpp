#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <map>

#include <cstring>
#include <algorithm>
using namespace std;
int main() { freopen("input.txt","r",stdin);
	int n; 
	cin >> n;
	string lang;
	

	int N; 
	set<string> vn, v, vl;
	vector<string> vtest; 
	map <int,set<string> > temp;

	for (int i = 0; i < n; ++i) { 
		cin >> N;
		for (int j = 0; j < N; ++j) { 
			cin >> lang; 
			vn.insert(lang); 
			vl.insert(lang); 
			v.insert(lang);		
			}
		
		temp[i + 1] = v;
		v.clear();
		}
		




		
		for (std::map<int,set<string> >::reverse_iterator it=temp.rbegin(); it != temp.rend();  ++it) {
			pair<int,set<string> > p = *it;		
			set_intersection(vn.begin(), vn.end(), p.second.begin(), p.second.end(), std::back_inserter(vtest));
			vn.clear();
			for (int i = 0; i < vtest.size(); ++i) {vn.insert(vtest[i]);}
			vtest.clear();	
			} 
		
		cout << vn.size() << '\n';
		for (std::set<string>::reverse_iterator it = vn.rbegin(); it != vn.rend();  ++it) {cout << *it << '\n';} 
				cout << vl.size() << '\n';		
		for (std::set<string>::reverse_iterator it = vl.rbegin(); it != vl.rend();  ++it) {cout << *it << '\n';} 
		return 0;}