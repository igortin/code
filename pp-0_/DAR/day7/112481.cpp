#include <iostream>
#include <set>

using namespace std;

int main(){

    set<char> u;
    string s;
    string t;

    getline(cin,s); 
    getline(cin,t);

    s = s + t;

    for(int i = 0; i < s.size(); ++i){
        u.insert(toupper(s[i]));
    }

    for(char c = 'A'; c <='Z'; ++c){
        if(u.find(c) == u.end()){
            cout << c;
        }
    }

    cout <<endl;

    return 0;
}