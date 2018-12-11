#include <iostream>
#include<vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;
struct point{
    int a;
    int b;
    void printInfo(){ cout << a << " " << b << '\n';}};


map<double, point> L;
void nv(int a, int b){
    point s;
    double l;
    s.a = a;
    s.b = b;
    l = sqrt(a*a + b*b);
    L[l] = s; l = 0;
}

int main(){
    int a, b, n; float aa = 0, bb = 0; 
    point s;
    int m = 0;
    cin >> n;
    if (n > 100) { n = 100;}
    for (int i = 0; i < n; ++i){
        cin >> a; cin >> b;
        if ( abs(a) > 1000 or abs(b) > 1000) {continue;}
        nv(a,b);}
 


for (map<double, point>::iterator it = L.begin(); it != L.end(); ++it) { 
        cout << (*it).second.a << ' ' << (*it).second.b << '\n';    } 
return 0;}