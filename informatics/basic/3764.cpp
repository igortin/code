#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
bool sorted(pair<string,int> l, pair<string,int> r){
	if(l.second > r.second) return true;
	else if (l.second == r.second) { 
		if (l.first > r.first) return false;
		else return true; }  
	return false;
}
	 

int main() { 
	string x; 
	map<string,int> n;
	vector <pair<string, int> > v; 
	map<string,int>::iterator it;
	while (cin >> x){
		it = n.find(x);
		if (it == n.end()) {n[x] = 1;} else {n[x] += 1;}
	 	}
	
	for (it = n.begin(); it != n.end(); ++it) {
	 	pair<string,int> p = *it;
	 	v.push_back(p);}

	sort(v.begin(), v.end(), sorted);	
	for (int i=0; i < v.size();++i){ cout << v[i].first << '\n';}
return 0;}