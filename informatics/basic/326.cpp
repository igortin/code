#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;
struct point{
    int a;
    int b;
    void printInfo(){ cout << a << " " << b << '\n';}};


vector <point> good;
void nv(int a, int b){
    point s;
    s.a = a;
    s.b = b; 
    good.push_back(s);
}

int main(){
    int a, b, n;
    point c;
    int m = 0;
    cin >> n;
        for (int i = 0; i < n; ++i){
            cin >> a; 
            cin >> b; 
            nv(a,b);} 
    double temp_l = 0, l = 0;
    for (int i = 0; i < good.size(); ++i) {
         for (int j = 0 ; j < good.size(); ++j){
            for (int k = 0 ; k < good.size(); ++k){ 
            temp_l =  (sqrt((good[i].a - good[j].a) * (good[i].a - good[j].a) + (good[i].b - good[j].b)*(good[i].b - good[j].b)) + sqrt((good[j].a - good[k].a) * (good[j].a - good[k].a) + (good[j].b - good[k].b)*(good[j].b - good[k].b)) + sqrt((good[i].a - good[k].a) * (good[i].a - good[k].a) + (good[i].b - good[k].b)*(good[i].b - good[k].b)));
        
    if (l < temp_l) {l = temp_l;}}}
    }   
cout.precision(15); cout << l << '\n'; return 0;}