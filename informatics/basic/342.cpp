#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>


using namespace std;
int main() { int a; int n = 0; 
	freopen("input.txt","r",stdin);
   	for (size_t i = 1; i <= 100; ++i ) {cin >> a; n = n + a;}
   	
   	cout << n << '\n'; return 0; }