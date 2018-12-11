#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

string to_lower_case(const string& s){
	string tmp;
	for (int i = 0; i < s.size(); ++i){
		char ch = s[i];
		if (isupper(ch)) {
			ch = tolower(ch);
		}
		tmp.push_back(ch);
	}
return tmp;
}

map<string, vector<string>>& fill_dict(map<string, vector<string>>& d, int N){
	string word;
	string bookmark;
	for (int i = 0; i < N; ++i){
		cin >> word;
		bookmark = to_lower_case(word);
		d[bookmark].push_back(word);
	}
return d;
}
bool in_dict(const vector<string>& dict, const string &word){
	for (int i = 0; i < dict.size(); ++i){
	if (word == dict[i]){
		return true;
		}
	}
	return false;}
















int count_upper(const string &s){
	int cnt = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if (isupper(s[i])) { ++cnt; }
	}
	return cnt;}











int check_work(const map<string, vector<string>>& dict){
	int mistakes = 0; 
	string word;
	while (cin >> word){
		if (count_upper(word) != 1) {
			++mistakes;

		}
		else { string lower_case_word = to_lower_case(word);
			   auto it = dict.find(lower_case_word);
			   if (it != dict.end() && !in_dict(it->second, word)) {
			       ++mistakes;
			   }
			}
		 }
		 return mistakes;
	}


int main(){
	std::map<string, std::vector<string>> dict; int N; cin >> N;
	dict = fill_dict(dict,N);
	cout << check_work(dict);
	return 0;}