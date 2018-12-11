#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct football{
    string name; 
    int year;
    int val;
    void printInfo(){cout << name << " " << year << " " << val << endl;}};
bool f(football l, football r){ if (l.val > r.val) return 0; return 1; }

int prostoe_chislo(int k,int m){
    int n = 0;
    for(size_t i = k; i <= m; ++i) {
        int prime = 1;  
        for(size_t j = 2; j <= (i+1)/2; ++j) { 
            if(i % j == 0) { prime = 0; break;}
            } 
        if (prime == 1) { n++;}}
    return n;
}
int main(){
    vector<football> v,v_;
    int n,k,m; string name; int year,val, B; football p;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> name;
        cin >> year;
        cin >> val;
        p.name = name;
        p.year = year;
        p.val = val;
        v.push_back(p); }
    cin >> k >> m; 
    B = prostoe_chislo(k,m);


    sort(v.begin(), v.end(),f); 
    for (int i = 0; i < v.size(); ++i) { 
        if (v[i].val == B && v[i].year >= k && v[i].year <= m){ cout << v[i].name << '\n';}}
return 0;}