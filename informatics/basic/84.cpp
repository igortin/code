#include <iostream>
#include <stdio.h>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	set<int> n, k; int count = 0;
	string vn, vk;
	string ts = "";

	freopen("input.txt","r",stdin);
	getline(cin, vn);
	getline(cin, vk);

	for (int i = 0; i <= vn.size(); ++i){
		if (vn[i] - 48 >= 0 and vn[i] - 48 <= 9) {
			ts = ts + vn[i];
		}
		else {
			int t = 0;
			for (int i = 0; i < ts.size(); ++i){
				t = t * 10 + (ts[i] - 48);
			}
			n.insert(t); ts = "";
		}
	}
	for (int i = 0; i <= vk.size(); ++i){
		if (vk[i] - 48 >= 0 and vk[i] - 48 <= 9) {
			ts = ts + vk[i];
		}
		else {
			int t = 0;
			for (int i = 0; i < ts.size(); ++i){
				t = t * 10 + (ts[i] - 48);
			}
			k.insert(t);
			ts = "";
		}
	}

	vector<int> v_intersection;
  set_intersection(n.begin(), n.end(), k.begin(), k.end(), std::back_inserter(v_intersection));
  cout << v_intersection.size();
  return 0;
}
