#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

struct point{
    double a;
    double b;
    void printInfo(){
      cout << a << " " << b << '\n';
    }
  };
int main(){
    double a, b, n;
    double temp;
    point s;
    double m = 0;
    freopen("input.txt","r", stdin);
    cin >> n;
    if (n > 100) { n = 100;}
    for (int i = 0; i < n; ++i){
        cin >> a; cin >> b;
        if ( abs(a) > 1000 or abs(b) > 1000) { continue; }
        temp = sqrt(pow(a,2) + pow(b,2));
        if (m < temp){
          s.a = a; s.b = b;
          m = temp;
        }
    }
    s.printInfo();
    return 0;
}
