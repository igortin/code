#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;


struct point{
    int a;
    int b;
    void printInfo(){
      cout << a << " " << b << '\n';
    }
  };

vector <point> gootpoint;
void nv(int a, int b){
    point s;
    s.a = a;
    s.b = b;
    gootpoint.push_back(s);
}

int main(){
    int a, b, n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> a;
        cin >> b;
        nv(a,b);
    }
    double temp_a;
    double temp_b;
    double temp_l = 0, l = 0;
    for (int i = 0; i < gootpoint.size(); ++i) {
         for (int j = 0 ; j < gootpoint.size(); ++j){
            for (int k = 0 ; k < gootpoint.size(); ++k){
            temp_l =  (sqrt((gootpoint[i].a - gootpoint[j].a) * (gootpoint[i].a - gootpoint[j].a) + (gootpoint[i].b - gootpoint[j].b)*(gootpoint[i].b - gootpoint[j].b)) + sqrt((gootpoint[j].a - gootpoint[k].a) * (gootpoint[j].a - gootpoint[k].a) + (gootpoint[j].b - gootpoint[k].b)*(gootpoint[j].b - gootpoint[k].b)) + sqrt((gootpoint[i].a - gootpoint[k].a) * (gootpoint[i].a - gootpoint[k].a) + (gootpoint[i].b - gootpoint[k].b)*(gootpoint[i].b - gootpoint[k].b)));
            }
        }
    }

    cout << temp_l << '\n';
    return 0;
  }
