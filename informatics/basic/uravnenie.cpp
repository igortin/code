#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;
int main() { 
	int a,b,c,d; 
	cin >> a;	cin >> b;	cin >> c;	cin >> d; int x;
	if (a == 0 and b == 0){cout << "INF" << '\n';}
	else if ((a == c and b == d) or (a == 0 and b != 0)){ cout << "NO" << '\n';}
	
	else if (a != 0) { int X = (b * c + d * a) * (b * c + d * a) - 4 * c * a * b * d;
		if (X < 0) {cout << "NO" << '\n';}
		else if (X > 0) { if ( int(sqrt(X)) == sqrt(X)){
			float N = (-(b * c + d * a) + sqrt(X)) / (2 * c * a);  
			if  ((int) N == N) {cout << N << '\n';}
			else {{cout << "NO" << '\n';}}  
			}
				}   
			else { cout << "NO" << '\n';}}
return 0;}