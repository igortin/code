#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int count_graph_reber(int count, int a[100][100]){
	int c = 0;
	for (size_t i = 0; i < count; ++i){
		for (size_t j = 0 ; j < count; ++j){
			if (a[i][j] == 1) { c = c + 1; }
		}
	}
	return c;
}

int main() {
	int count;
	cin >> count;
	int a[100][100];
	for (size_t i=0; i < count; ++i){
		for (size_t j = 0; j < count ; ++j)	{ cin >> a[i][j]; }
	}
	cout << count_graph_reber(count, a) << '\n';
	return 0;
}
