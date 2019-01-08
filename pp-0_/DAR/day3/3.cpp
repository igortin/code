#include <iostream>
#include <stdlib.h>


using namespace std;

int mystoi(string s){
  
  int res = 0;
  
  int n = s.size();
  int d = 1;
  
  for(int i = n - 1; i >= 0; --i){
    res = res + d * (s[i]-48);
    d = d * 10;
  }
  
  
  return res;
  
}


int main() {
  
  string s;
  
  cin >> s;
  

  cout << mystoi(s);
  

  return 0;

}


/*
'0' - 48
'1' - 49
'2' - 50
'3' - 51
'4' - 52
'5' - 53
'6' - 54
'7' - 55
'8' - 56
'9' - 57
*/


