#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <typeinfo>

#include <vector>
#include <cstring>
using namespace std;
int LongS(string S) {
    int i = 0; int l = 0; string w = ""; 
    int L = 0; string W = "";

    while (i <= (int)(S.length())) {
        if ((int) S[i] == 32){
            if (L > l){}
            else if (L < l){L = l; W = w;}  
            l = 0; 
            w = "";}         
        else { 
            l++; 
            w = w + S[i];}
        i++;}
    cout << W << '\n'; 
    cout << L << '\n';
    return L;}
int main() {
    string S;
    freopen("input.txt","r", stdin);
    getline(cin, S); 
    S = S + " "; // to fix count last w
    LongS(S); return 0;}