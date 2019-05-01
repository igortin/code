#include <iostream>
#include <utility>
#include <vector>

using namespace std;

void create_matrx_smejnost(int count, int a[101][101]){
	for (size_t i = 0; i < count; ++i){
			for (size_t j = 0; j < count ; ++j){
					a[i][j] = 0;
			}
	}
	for (size_t i = 0; i < count; ++i){
		for (size_t j = 0; j < count ; ++j){
				cin >> a[i][j];
		}
	}
}

void print_a(int count, int a[101][101]){
	for (size_t i = 0; i < count; ++i){
		for (size_t j = 0 ; j < count; ++j){
			cout << a[i][j] << ' ';
		}
	 	cout << '\n';
	}
}

void dfs(int i, int N, int *color, int a[101][101]){
	color[i] = 1;
	for (size_t j = 0; j < N; ++j){
				if (a[i][j] == 1 && color[j] == 0){ dfs(j,N,color,a);}
	}
}


int main() {
	int N, S;
	int c = 0;
	cin >> N >> S;
	int a[101][101];
	int color[101];
	for (size_t i = 0; i < N; ++i){ color[i] = 0; }
	create_matrx_smejnost(N, a);
	dfs(S - 1,N,color, a);
	for (int n = 0; n < N; ++n ){
			if (color[n] == 1) {
				c = c + 1;
			}
	}
	cout << c << '\n';
	return 0;
}
