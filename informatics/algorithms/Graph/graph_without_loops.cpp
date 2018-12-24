#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string r = "YES";
int matrix_smejnost[101][101];
bool path[101];
void todfs(int i, int count){
	path[i] = 1;
	for (size_t j = 0 ; j < count; ++j) {
		if (matrix_smejnost[i][j] == 1 && !path[j]) {
					matrix_smejnost[i][j] = 0; matrix_smejnost[j][i] = 0; // удаляем
					todfs(j, count);
				}
		else if (matrix_smejnost[i][j] == 1 && path[j]) {			// проверка дополнительных ребер в вершину j,если снова!!! попали вершину тоесть циклы, значит не дерево
				r = "NO";
				break;
				}
		}
}
int main() {
	int count;
	cin >> count;
	// Сторим матрицу смежности
	for (size_t i=0; i < count; ++i){
		 for (size_t j = 0; j < count ; ++j){
				cin >> matrix_smejnost[i][j];
				}
		}
	// Выполняем вставку в путь false
for (size_t i = 0; i < count; ++i ){ path[i] = 0; }




// Перебираем вершины в глубину поиск
for (size_t i = 0; i < count; ++i ) {
		// if (!path[i]) { count_component_svazanost = count_component_svazanost + 1;}
		
		todfs(0, count);
		if (r == "NO")
				break;
			}	// рай  }

for (size_t i = 0; i < count; ++i) {	// Поверяем что все вершины рекурсивно пройдены и нет других компонентов связанности
	if (!path[i]) {r = "NO"; break ;}
}

cout << r << '\n';
return 0;}
