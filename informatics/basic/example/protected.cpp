#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;
int main() { 
	int N; 	int n;

	vector<int> st; int i = 0; cin >> N;
	while(i < N){cin >> n; st.push_back(n); ++i;} 
	
	int l = 0; 	int r = l + 1;
	while (l < st.size()){

		while (r < st.size() and st[r] == st[l]) {
			++r;
		}

		if (r - l >= 3){
			 st.erase(st.begin() + l, st.begin() + r );
			 l = 0;
			 r = l + 1;

		}else{
			l = r;
			r = l + 1;
 
		}
	}
		

		
	// for (int k = 0; k < st.size() ; ++k) {cout << st[k] << ' ';}
			
	
	cout << N - st.size() << '\n'; 
	return 0;}