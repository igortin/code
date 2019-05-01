#include <iostream>
#include <stdio.h>
#include <set>
#include <algorithm>
#include <vector>

#include <cstring>
#include <typeinfo>
#include <map>
using namespace std;

int main() {
	string line, N;
	char c;
	map<string,int> n;
	freopen("input.txt","r", stdin);
	map<string,int>::iterator it;

	while (getline(cin, N)){
		for (int i = 0; i <= N.size(); ++i) {
			if ( N[i] != 32 and i != N.size()) {
				line += N[i];
			}
			else {
		 		if (line[0] != 32 and line[0] != 0 ) {
					cout << n[line] << ' ';
			 		it = n.find(line);
			 		if (it == n.end()){ n[line] = 1; }
		 			else { n[line] += 1; }
		 			line = "";
		 		}
			}
		}
	} return 0; }
