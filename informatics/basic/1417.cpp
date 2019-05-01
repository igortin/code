#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>

#include <math.h>
using namespace std;
int CN(string S, int i , int j){
    string Snotchange = "";
    string Snotchange_ = "";
    string S_i_change = "";
    string S_j_change = "";
    i = i - 1;
    j = j - 1;
    if (i != j){
        int c = 0;
        while (c < S.length()){
          if (c > j){
            Snotchange_+= S[c];
          }
        c++;
      }
    int counter = 0;
    while (counter < S.length()){
        if (counter < i){
            Snotchange += S[counter];
        }
        else if (counter == i and counter < j ){
          S_i_change += S[j]; S_j_change += S[i]; i++; j--;
        }
        else if (counter == i and counter == j ){
          S_i_change += S[j]; i++; j--;
        }
        // good protect please
        counter++;
      }
      int N = S_j_change.length();
      string temp = "";
      N = N - 1;
      while (N > -1){
        temp += S_j_change[N];
        N--;
      }
      cout << Snotchange << S_i_change << temp << Snotchange_ << '\n';
    }
    else { cout << S << '\n'; }
    return 0;
  }

int main() {
  string S;
  int i, j;
  ifstream fd("input.txt");
  fd >> S ; fd >> i; fd >> j;
  CN(S,i,j);
  return 0;
}
