#include <iostream>
#include <stdio.h>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main() { freopen("input.txt","r",stdin);
	int n;
	cin >> n;
	string Lang;
	int N;
	set<string> v_Lang, v_temp;
	vector<string> v_s, v_temp_1; v_Lang_1;
	int L = v_temp_1.size();
	for (int i = 0; i < n; ++i){
		cin >> N;
		for (int i = 0; i < N; ++i){
			cin >> Lang;
			v_temp.insert(Lang); v_Lang.insert(Lang);
			v_temp_1.push_back(Lang);
		}
		set_intersection(v_Lang.begin(), v_Lang.end(), v_temp.begin(), v_temp.end(), std::back_inserter(v_s));
		v_temp.clear();
		v_Lang.clear();
		if (v_temp_1.size() > L){
			v_Lang_1.clear();
			for (int i= 0 ; i < v_temp_1.size(); ++i){
				v_Lang_1.push_back(v_temp_1[i]);
			}
			L = v_temp_1.size();
			v_temp_1.clear();
		}
		for (int i = 0; i < v_s.size(); ++i){ v_Lang.insert(v_s[i]); }

		v_s.clear();
		}
		cout << v_Lang.size() << '\n';
		for (std::set<string>::iterator it=v_Lang.begin(); it != v_Lang.end();  ++it) {
			cout << *it << '\n';
		}
		cout << v_Lang_1.size() << '\n';
		for (std::set<string>::iterator it=v_Lang_1.begin(); it != v_Lang_1.end();  ++it) {
			cout << *it << '\n';
		}
		return 0;
}
