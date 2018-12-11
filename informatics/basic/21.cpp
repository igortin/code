#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <typeinfo>

#include <vector>
#include <cstring>
using namespace std;
int Count(string S) {
  
    int i = 0; int n = 0;

    while (i < (int) S.length()){
         if ((int) S[i] == 32 ){ n++ ;}
         i++;
    }
    cout << n + 1 << '\n';
    return n + 1;
}

int main() {
    string S;
    getline(cin, S);
    Count(S);
    return 0;
}