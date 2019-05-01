#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int matrix_smejnost[101][101];bool path[101]; vector<int> parent;

void todfs(int i, int count){
	path[i] = 1;
	for (size_t j = 0 ; j < count; ++j){
			if (matrix_smejnost[i][j] == 1){
				matrix_smejnost[i][j] = 0;
				matrix_smejnost[j][i] = 0;
				if (parent[i] == 1 && parent[j] == 0) {
					parent[j] = 2;
					todfs(j, count);
					}
				else if (parent[i] == 2 && parent[j] == 0)  {
					parent[j] = 1;
					todfs(j, count);
					}
				else if (parent[j] != 0) {
					int temp_p;
					if (parent[i] == 1) temp_p = 2;
					else temp_p = 1;
					if (parent[j] != temp_p) r = "NO"; break;
				}
			}
		}
	}

int main() {
	int n,m,a,b;
	cin >> n >>m;
	parent.resize(n);
	// Сторим матрицу смежности
	for (size_t i=0; i < n; ++i){
		 for (size_t j = 0; j < n ; ++j){
				 matrix_smejnost[i][j] = 0;
				}
		}
		for (size_t i = 0; i < m; ++i){
				 	cin >> a >> b;
					--a;
					--b;
					matrix_smejnost[a][b] = 1; matrix_smejnost[b][a] = 1;
		}
		// Выполняем вставку в путь false
	for (size_t i = 0; i < n; ++i ){ path[i] = 0; parent[i] = 0; }
		// Перебираем вершины в глубину поиск
		for (size_t i = 0; i < n; ++i ) {
		 		if (!path[i]){
					parent[i] = 1;
					todfs(i, n);
					if (r == "NO") break;
				}
		}
		cout << r << '\n';
		if (r != "NO" ) {
			for (size_t i =0 ; i < n; ++i){ if (parent[i] == 1) cout << i + 1 << ' '; }
			}
	return 0;
}
