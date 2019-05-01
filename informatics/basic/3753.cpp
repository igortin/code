#include <iostream>
#include <stdio.h>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
	set<int> set_a, set_b;
	vector<int> v_intersection;
	string vn, vk;
	freopen("input.txt","r",stdin);
	int count_A;
	int count_B;
	cin >> count_A;
	cin >> count_B;
	int x;
	for (int i = 0; i < count_A; ++i){
			cin >> x;
			set_a.insert(x);
	}
	for (int i = 0; i < count_B; ++i){
			cin >> x;
			set_b.insert(x);
		}
    set_intersection(set_a.begin(), set_a.end(), set_b.begin(), set_b.end(), std::back_inserter(v_intersection));
    cout << v_intersection.size()<< '\n';
    for (int i = 0; i < v_intersection.size(); ++i){
			cout << v_intersection[i]<< ' ';
		}
	cout << '\n';
  cout << set_a.size() - v_intersection.size() << '\n';
	vector<int> v;
	set_difference(set_a.begin(), set_a.end(), set_b.begin(), set_b.end(),
  std::inserter(v, v.begin()));

	for (int i = 0; i < v.size(); ++i){ cout << v[i]<< ' '; }
	cout << '\n';
	std::vector<int> vb;
	cout << set_b.size() - v_intersection.size() << '\n';
	set_difference(set_b.begin(), set_b.end(), set_a.begin(), set_a.end(),
  std::inserter(vb, vb.begin()));

	for (int i = 0; i < vb.size(); ++i){ cout << vb[i]<< ' '; }
	cout << '\n';
  return 0;
}
