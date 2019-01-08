#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
		int a,b,c;
		vector<int> v;
		cin >> a >> b >> c;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(),v.end());
		a = v[0];
		b = v[1];
		c = v[2];
		if (a*a + b*b == c*c) cout << "right" << '\n';
		else if (a*a + b*b > c*c) 	cout << "acute" << '\n';
		else if (a + b <= c) cout << "impossible" << '\n';
		else  cout << "obtuse" << '\n';
		return 0;
	}
