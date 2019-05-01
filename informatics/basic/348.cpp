#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>


using namespace std;
int main() {
	int a,b,c,v,N;
	string P = "";
	freopen("input.txt","r",stdin);

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> v;

  for (size_t i = 0 ; i < 1000 + 1; ++i ){
		N = a * i * i * i + b * i * i + c * i + v;
		if (N == 0) {
			cout << i <<' ';
		}
	}
	return 0;
}
