#include <iostream>
#include<vector>
#include <algorithm>
#include <cmath>
#include <stdio.h>

using namespace std;
struct Point{
    int a; 
    int b;
    void printInfo(){ cout << a << " " << b << '\n';}
};

vector<Point> v;
void nv(int a, int b){
    Point s;
    s.a = a;
    s.b = b;
    v.push_back(s);
}

int main(){
    int a, b, n; 
    Point s;
    int m = 0;
    cin >> n;
    if (n > 100) { n = 100;}
    for (int i = 0; i < n; ++i){
        cin >> a; cin >> b;
        if ( abs(a) > 1000 or abs(b) > 1000) {continue;}
        nv(a,b);
    }
    //for (int i =0 ; i < v.size(); ++i) { cout << v[i].a << ' ' << v[i].b << '\n';} 
    double temp_a = 0;
    double temp_b = 0;

    double temp_l = 0, l = 0;
    for (int i = 0; i < v.size(); ++i) {
         for (int j = 0 ; j < v.size(); ++j){
            temp_a = abs(v[i].a - v[j].a); 
            temp_b = abs(v[i].b - v[j].b);
            temp_l = sqrt(temp_a * temp_a + temp_b * temp_b); // cout << temp_l; cout <<'\n';   
            if ( l < temp_l) { l = temp_l;}
            }} 
                cout.setf(ios::fixed,ios::adjustfield);
                cout.precision(15);                  
            cout << l << '\n'; 
return 0;
}