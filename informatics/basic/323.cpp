#include <iostream>
#include<vector>
#include <algorithm>
#include <cmath>
#include <stdio.h>

using namespace std;


struct point{
    int a;
    int b;
    void printInfo(){
      cout << a << " " << b << '\n';
    }
  };
vector<point> v;
void nv(int a, int b){
    point s;
    s.a = a;
    s.b = b;
    v.push_back(s);
}

int main(){
    int a, b, n;
    float aa = 0, bb = 0;
    point s;
    int m = 0;
    freopen("input.txt","r", stdin);
    cin >> n;
    if (n > 100) { n = 100;}
    for (int i = 0; i < n; ++i){
        cin >> a; cin >> b;
        if ( abs(a) > 1000 or abs(b) > 1000) {continue;}
        nv(a,b);
      }
    for (int i = 0; i < v.size(); ++i) {
        aa = aa + v[i].a;
        bb = bb + v[i].b;
    }
    cout.precision(15);

    cout << aa/v.size() << ' ' << bb/v.size() << '\n';

    return 0;
}
