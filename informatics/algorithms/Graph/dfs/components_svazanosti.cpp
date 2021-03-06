#include<iostream>

#include<vector>

using namespace std;

vector<vector<int> > v; vector<bool> path;
vector<vector<int> > t; vector<int> temp;
// Поиск в глубину, вводится номер вершины i, из подвектора с индексом i вектора v (где i соединен ребрами с вершинами подвектора),
// идем по подвекору и проверяем были ли мы в вершине a[i][j] если нет проводим поиск в глубину снова.
void dfs(int i){
	    path[i] = 1;
			for (size_t j = 0; j < v[i].size(); ++j){
				if(!path[v[i][j]]){
					temp.push_back(v[i][j]);
	        dfs(v[i][j]); // cout << v[i][j] << '\n';
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
	for(int i = 0; i < n; ++i){ path[i] = 0; }
	// Строим вектор векторов v графа, например вектор на индексе 0 содержит вершины которые соединены с 0-ой вершиной, подвектор не содержит саму 0-ую вершину
	for(int i = 0; i < m; ++i){
      cin >> a >> b;
			--a; --b;
      v[a].push_back(b);
      v[b].push_back(a);
		}
	//проходим по вершинам от 0 до n, если вершина не посящалась запускаем поск в глубину
	for(int i = 0; i < n; ++i){
    dfs(i);
		t.push_back(temp);
		temp = {};
	}
	for (size_t i = 0 ; i < t.size(); ++i){
		for (size_t j = 0; j < t[i].size(); ++j){
			cout << t[i][j] << ' ';
		}
	 	cout << '\n';
	}
	return 0;
}
