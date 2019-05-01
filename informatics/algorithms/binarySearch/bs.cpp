#include <iostream>
#include<cstdlib>
using namespace std;



int  func(int a[],int l, int r, int k){
    if (r >= l){
      int m = l + (r - l)/2;
         if (a[m] == k) {
         return a[m];
       }
       if (a[m] > k){ r = m - 1;
         return func(a,l,r,k);
       }
       l = m + 1;
      return func(a,l,r,k);
    }
    if (r == -1) return a[l];
    if (l != r) {
      if (abs(a[r] - k) <= abs(a[l] - k)) return a[r];
      return a[l];
    }
    return a[l];
}

int main(){
  int n,k,N,K;
  cin >> N;
  cin >> K;
  int a[100002];
  for(int i = 0; i < N; ++i){
    cin >> n;
    a[i] = n;
  }
  for(int i = 0; i < K; ++i){
      cin >> k;
      cout << func(a,0,N-1,k) << '\n';
    }
  return 0;
}
