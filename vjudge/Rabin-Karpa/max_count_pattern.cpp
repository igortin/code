#include <iostream>
#include <map>
#include <algorithm>

#include <vector>

using namespace std;
struct st_pattern{
	string name;
	int index;
	int count;
};

bool compare(st_pattern l, st_pattern r){
	if(l.count > r.count) return true;
	return false;
}
void get_count_pattern(st_pattern instance, vector<long long>& h_text,vector <long long>& p_pow ,vector<st_pattern>& v_pattern){
  long long h_pattern = 0;
	for (size_t i=0; i < instance.name.length(); ++i) {
   h_pattern += (instance.name[i] - 'a' + 1) * p_pow[i]; 
  }
  for (size_t i = 0; i + instance.name.length() - 1 < h_text.size(); ++i) { 
  	long long c_text = h_text[i + instance.name.length()-1]; 
  	if (i)  c_text -= h_text[i-1];
  	if (c_text == h_pattern * p_pow[i]) { instance.count += 1;}  
  	}
		v_pattern.push_back(instance);
		}
int main() {
  int N; st_pattern pattern; string text; vector<st_pattern> v_pattern; vector<st_pattern> v;
	const int p = 31; vector<long long> p_pow(1000001);
 	p_pow[0] = 1; for (size_t i = 1; i < 1000001; ++i) { p_pow[i] = p_pow[i-1] * p;} -----------------------------------------------
	while (1){
    cin >> N;

		if (N == 0) break;
		for (int i = 0; i < N; ++i){ ------------------------------------------------
			st_pattern instance;
			cin >> instance.name;
			instance.count = 0;
			instance.index = i;
			v.push_back(instance);
		}
  	cin >> text;
		vector<long long> h_text(text.length());
		for (size_t j=0; j < text.length(); ++j) {             -----------------------------------------------
				h_text[j] = (text[j] - 'a' + 1) * p_pow[j];        -----------------------------------------------
				if (j)  h_text[j] += h_text[j-1];                  -----------------------------------------------
		}
		for (int i = 0; i < N; i++) {                          ------------------------------------------------
			get_count_pattern(v[i],h_text,p_pow,v_pattern);    ------------------------------------------------
    }
		vector <st_pattern> temp = v_pattern;
		sort(temp.begin(),temp.end(),compare); cout <<  temp[0].count << '\n';
	  for (int i = 0; i < v_pattern.size(); ++i) ------------------------------------------------------
    	{ if ( temp[0].count == v_pattern[i].count ) 
				cout << v_pattern[i].name << '\n'; }
		temp.clear(); h_text.clear(); v.clear(); 	v_pattern.clear();
		}
	return 0;}
