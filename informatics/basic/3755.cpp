#include <iostream>
#include <stdio.h>
#include <set>
#include <algorithm>
#include <vector>

#include <cstring>
#include <typeinfo>
using namespace std;
int main() { 
	set<int> a, b, test;


	vector<int> v_0, v_1, v_intersection, v_r, v; 
	int n = 0; 
	string line; 
	string line_answer; string temp_line = ""; 
	freopen("input.txt","r", stdin); 
	getline(cin, line);
	for (int i = 0; i < line.size(); ++i){ n = n * 10 + (line[i] - 48);}
	for (int i = 1; i <= n; ++i){ a.insert(i);}
	while (1) { 
		getline(cin, line); //cout << line << '\n';
	 	
	 	if (line[0] == 'H') { break;
	 	}
	 	else { 
	 			getline(cin, line_answer);
		 		for (int i = 0; i <= line.size(); ++i) { 
	 			if (line[i] - 48 >= 0 and line[i] -48 <= 9) {
					// get string val from line 
	 				temp_line = temp_line + line[i];}
	 			else { 
	  				// get val from string
	  				int val = 0;
	  				for (int i = 0; i < temp_line.size(); ++i){val = val * 10 + (temp_line[i] - 48);}
	  				temp_line = "";	
	  				if (line_answer[0] == 'N'){ v_0.push_back(val);}
	  				else { v_1.push_back(val);}
	 				}
	 			}
	 		if (line_answer[0] != 'N') {
	 			sort(v_1.begin(), v_1.end());
	 			set_intersection(a.begin(), a.end(), v_1.begin(), v_1.end(), std::back_inserter(v_intersection)); 
				a.clear(); v_1.clear();
				for (int i = 0; i < v_intersection.size(); ++i) {a.insert(v_intersection[i]);}					
				v_intersection.clear();}}}
	sort(v_0.begin(), v_0.end());
	std::set_difference(a.begin(), a.end(), v_0.begin(), v_0.end(), std::inserter(v, v.begin()));		
	a.clear(); for (int i = 0; i < v.size(); ++i){ a.insert(v[i]);} 
	for(std::set<int>::iterator it=a.begin(); it != a.end(); ++it) {cout << *it << ' ';} 
	return 0;}