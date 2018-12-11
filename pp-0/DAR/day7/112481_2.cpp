#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    string s;
    string t;

    getline(cin,s); 
    getline(cin,t);

    s = s + t;

    char v[s.size()];
    for(int i = 0; i < s.size(); ++i){
        v[i] = toupper(s[i]);
    }

    sort(v,v + s.size());

    char u[26];
    for(char c = 'A'; c <='Z'; ++c){
        u[int(c-'A')] = c;
    }

    vector<char> r(26);
    vector<char>:: iterator it;

    it = set_difference(u,u + 26,v,v + s.size(),r.begin());

    for(vector<char>::iterator it2 = r.begin(); it2 != it; ++it2){
        cout << *it2;
    }
   

    return 0;
}