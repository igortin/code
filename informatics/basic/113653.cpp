#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;
// int f(string n){ int res = 0;
// 	for (int i = 0; i < n.size(); ++i){
//		if (res < (n[i] - 48)){ res = n[i] - 48;}}
//		return res;}


























int f(string n, int k, int res){ if (k == n.size()) return res; 	if (res < (n[k] - 48)){res = n[k] - 48;}return f(n,++k,res);}
int main() {string n; int k = 0; cin >> n; int res = 0;	cout << f(n, k, res) << '\n';return 0;}