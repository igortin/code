#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

int PLND(string S) {
    string S1, Sp = "";
    int i = 0;
    while (i < S.length()){
        if ((int) S[i] == 32){
            i++;
            continue;
        }

        else {
            S1 += S[i];
            i++;
        }
    }

    int j = S1.length() - 1;

    while (j > -1){
      Sp += S1[j];
      j--;
    }

    int n = 0;
    while (n < S.length()){
        if (Sp[n] != S1[n]){
          cout << "no" << '\n';
          n++;
          break;
        }
        else {
            if (n == (S1.length() - 1)){
              cout << "yes" << '\n';
              break;
            }
            else {
              n++;
            }
        }
    }
    return 0;
}



int main() {
    string S;
    ifstream fd("input.txt");
    getline(fd, S);
    PLND(S);
    return 0;
  }
