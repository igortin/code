#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


int main(){
 	string s,word,text; int n=0, count=0;
 	cin >> s; 
 	while (cin >> word){
 		text = text  + word + " ";
 	};
 	int i = 0, j = 0; // cout << text << "\n" << s << '\n';
 	while (i < text.size() && j < s.size()) {
 		if (text[i] == s[j]) {
 				count = count + 1; cout << "match" << " "<< text[i] << " " << s[j] << " " << count << '\n';
 				++i;
 				++j;


			
 			if (count == s.size()-1) { 
 				j = 0;	n = n + 1; count = 0; }
	 		}
 		else {
 			++i; j=0; count = 0; cout << "no" << " "<< text[i] << " " << s[j] << " " << count << '\n';
 		}
 	}
 	cout << n << '\n';
 	return 0;}