#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main (){
  std::string s, text;
  std::getline (std::cin,s);
  std::getline (std::cin,text);
  cout << s << ' ' << text << '\n';
  for (int i = 0; i < text.size(); ++i) {
  	for (int j = 0; j < s.size(); ++j) {
  		if (text[i] == s[j]) {  cout << "->" << text[i] << ' ' << s[i] << '\n'; }
  	}
  }
  return 0;
}
