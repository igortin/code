#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

int main(){
  int n,k, N = 0;
	cin >> n >> k;
	float t = k;
	for(int i = 1; i <= n; ++i){
			t = t + 5*i;

      if (t > 240) { break; }
      N = i;
		}
	cout << N << '\n';
	return 0;
}
