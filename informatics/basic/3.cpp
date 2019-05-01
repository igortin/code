#include <iostream>
#include <stdlib.h>     /* div, div_t */
#include <vector>
#include <algorithm>
using namespace std;

vector<string> v;
void f(string word){ v.push_back(word); }
int main(){
	int n, val = 0;
	string str,r;
 	char c;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> str;
		f(str);
	}
	cin >> c;
	for (int i=0; i < v.size(); ++i){
		if (v[i][0] == c && val < v[i].size()){
 			r = v[i];
 			val = v[i].size();
		}
	}
	cout << r << '\n';
  return 0;
}
