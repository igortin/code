#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <typeinfo>

using namespace std;
unsigned char ToUpper(unsigned char c) {
 	  char res;
    int k = (int) c;
    if ( k >= 97 and k <= 122) {
      cout << (char)(k - 32) << '\n';
    }
    else if ( k >= 65 and k <= 90) {
      cout << (char)(k + 32) << '\n';
    }
    else {
      cout<< c <<'\n';
    }
    return res;
  }
int main(){
	unsigned char c;
  cin >> c;
  ToUpper(c);
  return 0;
}
