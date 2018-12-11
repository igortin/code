#include <iostream>
#include <algorithm>
#include <map>
#include <vector>


using namespace std;

map<string,string> n;
vector<string> v,vv; vector<string> good;



void create_cp(int N){
	string p,c; 
	for (int i=0; i < N - 1; ++i){
		cin >> c >> p; 
		n[c] = p;
	}
}


int fv(string c){
	if ( n.find(c) == n.end() ) return 0;
	v.push_back(n[c]);
	return fv(n[c]);}

int fvv(string  c){
	if ( n.find(c) == n.end() ) return 0;
	vv.push_back(n[c]); 
	return fvv(n[c]);}



int main() {
	int N; 
	map<string,string>::iterator it;
	string p,c;
	cin >> N;
	create_cp(N);
	while (cin >> c >> p) {	vector<string> cnt;
		v.push_back(c);

		vv.push_back(p);
		fv(c); fvv(p);
	
		if (v.size() >= vv.size()) {
			for (int i = 0; i < v.size(); ++i) { 
				for (int j = 0 ; j < vv.size(); ++j) { if (v[i] == vv[j]) { cnt.push_back(v[i]);break; }}}}

				
		else if (vv.size() > v.size()) { 
			for (int i = 0; i < vv.size(); ++i) { 
				for (int j = 0 ; j < v.size(); ++j){
					if (v[j] == vv[i]) { cnt.push_back(vv[i]); break;}}}}
	v.clear();vv.clear();
	cout << cnt[0] << '\n';
	}
	return 0;}