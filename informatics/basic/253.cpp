#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>

using namespace std;
int main() {
    int N; cin >> N; 
    if ((N % 4 == 0 and N % 100 != 0) or (N % 400 == 0)) {cout << "YES" << '\n';}
    else {cout << "NO" << '\n';}
	return 0;}