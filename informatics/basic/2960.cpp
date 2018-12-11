#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>

using namespace std;
int main() { 
    int N; int n; int t;
    cin >> N; 
    cin >> n;
    // string b  = "";

    // while (N != 0){
    //	b = char((N % 10 + 48)) + b;
    // 	N = N / 10;}
    //int i = 0;
    //int j = b.size() - 1;
    //while (i < j){
    // 	if (b[i] == b[j]){ t = 1;
    // 		i++;
    // 		j--;
    // 	}
    //	else { t = 0; 
    // 		   break; }
    // }
    // if (abs(n) == t){cout<< "YES" << '\n';}
    // else {cout << "NO" << '\n';}
        if ( N == 1 and n == 1){cout<< "YES" << '\n';}
        else if ( N != 1 and n != 1){cout<< "YES" << '\n';}
        else {cout << "NO" << '\n';}
	return 0;}