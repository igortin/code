#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <typeinfo>

using namespace std;
bool Compare(string S1, string S2) {
	bool res = false;
	// cout << (int) S1.length() << " " << (int) S2.length() << '\n'; 
	if ((int) S1.length() != (int) S2.length()){
		cout << "no" << '\n'; }
	
	else { 
		int i = 0;
    	while ( i <= (int) S1.length()) { 	
    		// cout << S1[i] << " " << S2[i] << '\n';
    		if (S1[i] != S2[i]){ 
    			cout << "no" << '\n'; 
    			break;
    			}
    		if (i == S1.length() and (S1[i] == S2[i])){ 
    			cout << "yes" << '\n';
    			}
    		i++;
    		}
		}
  return res;
}	 


int main() {  
	string S1;	
	string S2;
	cin >> S1;	
	cin >> S2;
    Compare(S1,S2);
    return 0;
}