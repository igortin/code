#include <iostream>
#include <cmath>
#include <stdio.h>
 
using namespace std;
 
float x;
void get_root(float a, int n, float l, float r){
    if (n == 1) {
      x = a;
      return;
      }
 
    if (abs(r - l) > 0.000001){
      float  m = l + (r - l)/2;
      x = m;
 
 
 
      if (pow(m,n) > a) {
        r = m;
        get_root(a,n,l,r);
        }
      l = m;
      get_root(a,n,l,r);
    }
}
 
 
int main(){
  float a,n;
  cin >> a; cin >> n;
  get_root(a,n,0,1002); printf("%1.11f\n", x);
  return 0;
}
