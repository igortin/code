#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <typeinfo>

using namespace std;
bool IsDigit(unsigned char c) {
 	bool res;
    int k = (int) c;
    if ( k >= 48 and k <= 57) {
    	cout << "yes" << '\n';
    }
    else {
    	cout<< "no"<<'\n';
    }
	return res;
}

int main(){
	unsigned char c;
	cin >> c;
    IsDigit(c);
    return 0;
}
