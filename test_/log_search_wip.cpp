#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;

int c = 0;
int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
vector<int> w;
int to_int(string s){
	int n = 0;
	for (size_t i = 0 ; i < s.size(); ++i) { n = n * 10  + (s[i] - 48) ;}
		return n;
}
int main() {
  int n,m; string text;
	cin >> n >> m; getline(cin, text);
	while (getline(cin, text)) {
		int p_g, p_m, p_c, p_h, p_mn, p;
		p_g = to_int(text.substr(0, 4));
		p_m = to_int(text.substr(5, 2));
		p_c = to_int(text.substr(8, 2));
		p_h = to_int(text.substr(11, 2));
		p_mn = to_int(text.substr(14, 2));
		p = to_int(text.substr(17, 2));
		int temp = p_c;
		for (int i = 0 ; i < p_m ; i++)	{ temp = temp + month[i]; }
		int s = p + p_mn * 60 + p_h * 3600 + temp * 24 * 3600;
		while (c < (int) w.size() && w[c] + n <= s)
					c = c + 1;
					w.push_back(s);
					if (w.size() - c >= m) { cout << text.substr(0, 19) << '\n'; return 0; }
		}

cout << -1 << '\n';
return 0;}
