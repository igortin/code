#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > v;

vector<bool> path;

vector<int> temp; vector<vector<int> > t; // Поиск в глубину, вводится номер вершины i, из подвектора с индексом i вектора v (где i соединен ребрами с вершинами подвектора),
void dfs(int i){													// идем по подвекору и проверяем были ли мы в вершине a[i][j] если нет проводим поиск в глубину снова.
  path[i] = 1;
	for (size_t j = 0; j < v[i].size(); ++j) {
		if(!path[v[i][j]]){
					temp.push_back(v[i][j]);
          dfs(v[i][j]);
      }
		}
	}


	int main(){
	    int n, m;
			int a, b;
			cin >> n >> m;
	    path.resize(n);
			v.resize(n);
			// Заполнить false вектор path ( индекс вектора path - номер вершины  ), инфрмация что не были в вершинах вектора v
			for(int i = 0; i < n; ++i){ path[i] = 0;}
			// Строим вектор векторов v графа, например вектор на индексе 0 содержит вершины которые соединены с 0-ой вершиной, подвектор не содержит саму 0-ую вершину
			for(int i = 0; i < m; ++i){
	        cin >> a >> b;
	        v[a-1].push_back(b-1);
	        v[b-1].push_back(a-1);
			}


			// проходим по вершинам от 0 до n, если вершина не посящалась запускаем поск в глубину
			for(int i = 0; i < n; ++i){
			    if(!path[i]){
							temp.push_back(i);
	            dfs(i); t.push_back(temp); temp = {};
		 			}
				}

			cout << t.size() << '\n';
			for (size_t i = 0 ; i < t.size(); ++i)
					{ cout << t[i].size() << '\n';
						for (size_t j = 0; j < t[i].size(); ++j)
							{ cout << t[i][j] + 1 << ' '; }

					cout << '\n';}
			 return 0; }
