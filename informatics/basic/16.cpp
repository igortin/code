#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
	int n; int k;
	cin >> k;
	cin >> n;
	div_t N;
	N = div(n, k) ;  

	if (N.rem > 0) {cout << N.quot + 1<< endl; cout << N.rem << endl;}
	else {	cout << N.quot << endl; cout << k << endl;}
  	return 0;
  }