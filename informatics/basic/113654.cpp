#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;
int f(string n, int k, int res){
	if (k == n.size()) return res;
	if ( n[k] > 47 and n[k] < 58){
		res++;
	}
	return f(n,++k,res);}
int main() {
	string n;
	int k = 0;
	int res = 0;
	cin >> n;
	cout << f(n, k, res) << '\n';
	return 0;
}
