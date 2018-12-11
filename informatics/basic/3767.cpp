#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
int main() {
	int no; 
	string str, en, p = ""; 
	map<string,vector<string> > n;
	map<string,vector<string> >::iterator it;
	int i = 0;
	cin >> no;
	while (i < no){ 
		cin >> en;
		cin.ignore();
		getline(cin,str);
		for (int k = 0; k <= str.size(); ++k) {
		 	 if (str[k] != 32 and k != str.size()) { if (str[k] != 44) p = p + str[k];}
		 	 else { if (p[0] != 45) {n[p].push_back(en);} 
		 	 	p = "";}
			} 
	++i;}

	cout << n.size() << '\n';
	for (it = n.begin(); it != n.end(); ++it) { 
		sort((*it).second.begin(),(*it).second.end());
		cout << (*it).first << " -" << ' ';
		if ((*it).second.size() == 1) { cout << (*it).second[0] << '\n';}
		else { cout << (*it).second[0]; 
			for (int i = 1; i < (*it).second.size() - 1; ++i){ cout << ", "<< (*it).second[i];}

			   cout << ", "<< (*it).second[(*it).second.size()-1]  << '\n';}
		}return 0;}