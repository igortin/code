#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <set>

#include <string>
#include <map>
using namespace std;




string to_lower_case(const string& s) {
    string tmp;

    for (int i = 0; i < s.size(); ++i) {
        char ch = s[i];
        if (isupper(ch)) {
            ch = tolower(ch);
        }

        tmp.push_back(ch);
    }

    return tmp;
}



map<string,vector<string> > create_map_check(int N) {
	int i = 0;
	map<string,vector<string> > map_check;
	string str; 
	string str_temp = ""; 
	while ( i < N ){ 
		cin >> str;
		for (int j = 0 ; j < str.length(); ++j) {str_temp += tolower(str[j]);}
		// cout << str_temp << ": " << str << '\n';
		map_check[str_temp].push_back(str); 
		str_temp = "";
		++i;
		}
	return map_check;}


bool check_map_str( const string &str, const vector<string>& map_check_v){		
	for (int i = 0; i < map_check_v.size(); ++i) {
		if (str == map_check_v[i]) return true;}

	return false;}	





bool check_upper_cnt(string str){		
	int cnt = 0;
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] >= 65 and str[i] <= 90) { cnt += 1;}
		}
	if (cnt == 1) return true;
	return false;
	}









int main(){ 
	
	
	int N;
	int count = 0;
	map<string,vector<string> > map_check; 
	map<string,vector<string> >::iterator it; 
	cin >> N;	
	map_check = create_map_check(N);
	string str; 
	string str_temp = "";
	while ( cin >> str ){ 
		str_temp = to_lower_case(str);
		if (check_upper_cnt(str) == 0) { count +=1;}
		else {
			it = map_check.find(str_temp);
			if ( it != map_check.end() and check_map_str(str, it->second) == 0) { count += 1;}
		}
		str_temp ="";}
 cout << count; 
return 0;}