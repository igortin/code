#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <typeinfo>
#include <vector>
#include <cstring>
using namespace std;
char Count(string S) {
  int i = 0;
  int j = 0;
  int a = 0;
  char res;
  string S1 = S;


  while (i < (S.length())) {
    while (j < S1.length()) {
      if ((int) S[i] == (int) S1[j]){
          a++;
          if (a == 2){ res = S[i]; break; }
      } j++;
    }
    i++; j = 0; a = 0;
  }
  return res;
}

int main() {
  string S;
  freopen("input.txt","r", stdin);
  getline(cin, S);
  cout << Count(S) << '\n';
  return 0;
}
