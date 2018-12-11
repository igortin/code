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


vector <point> good, good_77777777777777777777777777777777777777777777777777;
void nv(int a, int b){
    point s;
    s.a = a;
    s.b = b; 
    good.push_back(s);
}

int main(){
    int a, b, n; float aa = 0, bb = 0; 
    point c;
    int m = 0;
    cin >> n;
    //if ( n > 2 and n < 101) {
        for (int i = 0; i < n; ++i){
            cin >> a; 
            cin >> b;
            // if ( abs(a) > 1000 or abs(b) > 1000) {continue;}
            nv(a,b);} //}
    double temp_a;
    double temp_b;
    double temp_l = 0, l = 0;
     
    for (int i = 0; i < good.size(); ++i) {
         for (int j = 0 ; j < good.size(); ++j){
            for (int k = 0 ; k < good.size(); ++k){ 
            temp_l =  (sqrt((good[i].a - good[j].a) * (good[i].a - good[j].a) + (good[i].b - good[j].b)*(good[i].b - good[j].b)) + sqrt((good[j].a - good[k].a) * (good[j].a - good[k].a) + (good[j].b - good[k].b)*(good[j].b - good[k].b)) + sqrt((good[i].a - good[k].a) * (good[i].a - good[k].a) + (good[i].b - good[k].b)*(good[i].b - good[k].b)));
        }
    }} cout << temp_l << '\n';   
    
    // cout.precision(15); cout << N + l << '\n'; 


    return 0;}