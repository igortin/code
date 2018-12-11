#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>

#include <math.h>
using namespace std;
int FUNC(string S) { 
    // cout << S << '\n';
    string S1 = ""; 
    int i = 0; int c = 0;
    
    while (i < S.length()){
        if ((int) S[i] != (int) 32){ 
            S1 += S[i]; // cout << S1 << '\n'; 
            c = 0; 
        }
        else if ((int) S[i] == (int) 32 and c == 0){ 
            S1 += S[i]; // cout << S1 << '\n';
            c++; 
        }

        i++;
    }

    cout << S1 << '\n';
    return 0;}
int main() { 
    string S; 
    freopen("input.txt", "r", stdin);
    getline(cin,S);
    FUNC(S); 
    return 0;}