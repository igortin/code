#include <iostream>
#include <utility>
#include <set>

using namespace std;


void create_matrx_smejnost(int n, int m, int a[100][100]){
	int v, u;
	// cout << "Count vershin: "<< n << '\n';
  // cout << "Count max reber: " << n * (n - 1) / 2 << '\n';
	// cout << "Count reber: " << m << '\n';
	for (size_t i = 0; i < n; ++i){
			for (size_t j = 0; j < n; ++j){
					a[i][j] = 0;
				}
	}
  for (size_t i = 0; i < m; ++i){
			cin >> v >> u;
			a[v - 1][u - 1] = 1;
			a[u - 1][v - 1] = 1;
	}
}
void print_matrix_smejnost(int n, int a[100][100]){
	for (size_t i = 0; i < n; ++i){
			for (size_t j = 0; j < n; ++j){
					cout << a[i][j] << ' ';
			}
			cout << '\n';
	}
}
int main() {
	int n;
	cin >> n; // count V
	int m;
	cin >> m; // count reber
	int a[100][100];
	create_matrx_smejnost(n,m,a);
	sprint_matrix_smejnost(n,a);
	return 0;
}
