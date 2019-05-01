#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>

using namespace std;
set<string> s; map<string,vector<string> > vectorN; // good;
void create_cp(int N){
	string p,c;
	for (int i=0; i < N - 1; ++i){
		cin >> c >> p;
		vectorN[p].push_back(c);
		s.insert(c); s.insert(p);
	}
}
void show_map_cp(map<string,vector<string> > v){
	map<string,vector<string> >::iterator it;
	for (it = vectorN.begin(); it != vectorN.end(); ++it) {
		cout << (*it).first << ' ';
		for (int i=0; i < (*it).second.size(); ++i){
			cout << (*it).second[i] << ' ';
		}
		cout << '\n';
	}
}
int f(string p){
	vector<string> ch = vectorN[p];
	int count = ch.size();              // important counter to return
	if (count == 0) return 0;
	for(int i = 0; i < ch.size(); ++i) {
		count += f(ch[i]);
	}
	return count;
}

int main() {
	int N;
	string p,c;
	set<string>::iterator it;
	cin >> N;
	create_cp(N);

	for (it = s.begin(); it != s.end(); ++it) {
		cout << (*it) ; cout << ' '; cout << f((*it)) << '\n';
	}
	return 0;
}
