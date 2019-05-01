#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>


using namespace std;
int main() {
	int N, n, c = 0;
	freopen("input.txt","r",stdin); cin >> N;
  for (size_t i = 0; i < N; ++i ) {
		cin >> n;
		if ( n == 0 ){
			c += 1;
		}
	}
  cout << c << '\n';
	return 0;
}
