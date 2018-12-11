#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <typeinfo>

#include <vector>
#include <cstring>
using namespace std;
int PLND(string S) {
    int i = 0; bool b;
    while (i < (int)(S.length()/2)){
        
         if ((int) S[i] != (int) S[(int) S.length() - i - 1]){ 
            cout << "no" << '\n'; b = false;  break;
        }      
        else {
            b = true;}
        i++;}
    if (b == true) { cout << "yes" << '\n';} 
    return 1;
    }
int main() {
    freopen("input.txt", "r", stdin);
    string S; 
    cin >> S;
    PLND(S);
    return 0;
}