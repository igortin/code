#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main(){
	map<string, int> n;
 	string name;
 	int val;
	map<string,int>::iterator it;
	while (cin >> name >> val) {
		it = n.find(name);
		if (it != n.end()) {
			if ((*it).second < val) { n[name] = val; }
			}
		else {
			n[name] = val;
		}
	}
	for(it = n.begin(); it != n.end(); ++it) {
		cout << (*it).first << ' ' << (*it).second << '\n';
	}
    return 0;}
