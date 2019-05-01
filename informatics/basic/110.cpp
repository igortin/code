#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstring>

using namespace std;

string Subst(string S0, string S1) {
  int i = 0;
  int j = 0;
  string temp = "";
  while (i < (S0.length())) {
    while (j < S1.length()) {
      if ((int) S0[i] != (int) S1[j]){  // }
        if (temp == ""){  //}
          j = 0;
          i++;
          break;
        }
        else {
          i = i - temp.length() + 1;
          j = 0;
          temp = "";
        }
      }
      else { temp = temp + S0[i];
        if (temp.length() == S1.length()){return "yes";}
        else { i++; j++;}
      }
    }
  }
  return "no";
}


int main() {
  string S0;
  string S1;
  freopen("input.txt","r", stdin);
  getline(cin, S1);
  getline(cin, S0);

  cout << Subst(S0, S1) << endl;
  return 0;
}
