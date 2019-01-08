#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector <char> vstr;
	vector <char> vstr1;
 	string str, str1;
 	int temp = -1;
	cin >> str;
	cin >> str1;
	for (int i=0; i < str.size(); i++) {
		vstr.push_back(str[i]);
	}
	for (int j=0; j < str1.size(); j++) {
		vstr1.push_back(str1[j]);
	}
	sort(vstr.begin(),vstr.end());
	sort(vstr1.begin(),vstr1.end());
	if (vstr.size() == vstr1.size()){
		for (int i = 0; i < vstr.size(); i++) {
			if (vstr[i] != vstr1[i]) {
				temp = 0;
				break;}
			}
	}
	else {
		temp = 0;
	}
	if (temp == -1) {
			cout << "YES" << '\n';
		}
	else { 	cout << "NO" << '\n'; }


	return 0;
	}
