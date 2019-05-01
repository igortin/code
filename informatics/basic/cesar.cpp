#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;





int PLND(string S, int X) {
    int i = 0;
    string S0 = "";
    string list = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while (i < S.length()){
        int j = 0;
        while (j < list.length()){
            if (S[i] == list[j]) {
                int cur_p;
                if ((j - X) >= 0) {
                  cur_p = (j - X); S0 += list[cur_p];
                }
                else {
                  cur_p = 26 + (j - X); S0 += list[cur_p];
                }
                break;
              }
            j++;
          }
        i++;
      }
    cout << S0 << '\n';
    return 0;
}

int main() {
    string S;
    int X;
    ifstream fd("input.txt");
    fd >> S ;

    fd >> X;
    PLND(S,X);
    return 0;
}
