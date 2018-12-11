#include <iostream>
#include <algorithm>
using namespace std;



int *pref(string line){
	int *p = new int[1000001];
	p[0] = 0;

	for(int i = 1; i < line.size(); ++i){
		int j = p[i-1];

		while(j > 0 && line[i] != line[j]){
			j = p[j-1];
		}
		if(line[i] == line[j]){
			j = j + 1;
		}
		p[i] = j;
	}
	return p;
}




int main() {
	string text;
	string pattern = "";
	while (1){
		cin >> text;
		if (text == ".") break;
		int *ptr = pref(text);
		// protected

		int m_val = ptr[text.length()-1]; // *std::max_element(ptr, ptr + text.length());
		if (text.length() % (text.length() - m_val) == 0) cout << text.length()/(text.length() - m_val) << '\n';
		else cout << 1 << '\n';
		delete ptr;
	} return 0; }
