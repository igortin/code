#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;
bool f(int N){ 
	if (N == 1) return 1; 
	if (N < 1) return 0; 
	return f(N-3) or f (N-5);}


int main() {
	int N;	
	cin >> N; 
	if ( f(N) == 1 ) { cout << "YES" << '\n';} 
		else { cout << "NO" << '\n';}; return 0;}