#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;
const int INF = 1e9;
vector<vector< pair<int,int>>> g;
vector<int> d; vector<int> p; vector<bool> visited; vector<int> petrol;
void print_g(int n){
	for (size_t i = 0; i < n; i++) {//---------------------------------------------
		for (size_t j = 0; j < g[i].size(); ++j) //---------------------------------
			{cout << g[i][j].first + 1<< '|'; cout << g[i][j].second << ' ';} //------------------------------------
		cout << '\n';}
	}
void func_petrol(int n, int s){
	d[s] = 0;
	for (int i = 0; i<n; ++i) {
		int v = -1;
		for (int j=0; j<n; ++j)
			if (!visited[j] && (v == -1 || d[j] < d[v]))
				v = j;
		if (d[v] == INF)
			break;
		visited[v] = 1;
		for (size_t j=0; j<g[v].size(); ++j) {
			int to = g[v][j].first;
			int len = g[v][j].second;
			if (d[v] + len < d[to]) {
				d[to] = d[v] + len; p[to] = v;}
				}
			}
		}




int main() {
	int n, m, val, v0, v1;
	cin >> n; // число вершин


	g.resize(n);
	d.resize(n, INF);
	p.resize(n, -1);
	visited.resize(n, 0);
	petrol.resize(n, 0);
	for (size_t i = 0; i < n; ++i) { cin >> val; petrol[i]= val;} //-----вектор цены топливаб индекс указывает номер вершины----------

	int s = 0; // вершина начальная рай
	cin >> m; // число ребер
	for (size_t i = 0 ; i < m	 ; ++i ) { 	//-----вектор векторов пар {номер вершины, цена топлива}-----
		cin >> v0 >> v1;
		g[v0-1].push_back({v1-1, petrol[v0-1]}); // например для вершины 1 вектор содержит пару (вершина 2, стоимость безина вершины 1), поточу что из вершина 1 ребро соединяет вершину 2. Вектор.
		g[v1-1].push_back({v0-1, petrol[v1-1]});
	}
	func_petrol(n, s);
	if (visited[n-1]){ cout << d[n-1] << '\n'; }
	else { cout << -1 << '\n';}
	return 0;
}
