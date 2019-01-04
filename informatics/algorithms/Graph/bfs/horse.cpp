#include <iostream>
#include <utility>
#include <queue>

using namespace std;

int path[20][20];							   // save val was or not array[n][n]
pair<int,int> parent[20][20];	   // save pair for parent_x, parent_y for x,y array[n][n]
int dst[20][20];								 // save distance from x0,y0 to vertex
vector<pair<int, int>> moves{		 // variants of steps
	{1, 2}, {1, -2}, {-1, 2}, {-1, -2},{2, 1}, {2, -1}, {-2, 1}, {-2, -1}
	};
bool not_visited(int x, int y){		// func was visit or not
		if (x > -1 && x <= 20 && y > -1 && y <= 20 && !path[x][y]) return 1;
		return 0;
	}
void print_dst(int n){
	for (size_t i = 0; i < n; ++i){    //----------------------------
			for (size_t j = 0; j < n; ++j)    //-----------------------------
				{	cout << dst[i][j] << ' ';
					}
			cout << '\n';}
}
void print_parent(int n){
	for (size_t i = 0; i < n; ++i){    //----------------------------
			for (size_t j = 0; j < n; ++j)    //-----------------------------
				{
					cout << parent[i][j].first << '|';
					cout << parent[i][j].second << ' ';}
			cout << '\n';}
}
void print_vertex(int x1, int y1){		// show path to x1,y1
	if ( x1 == 0 && y1 == 0) return ;
	print_vertex(parent[x1][y1].first, parent[x1][y1].second);
		cout << x1 + 1<< " "; cout << y1 + 1<< '\n'; }



void tobfs(int x0, int y0, int x1, int y1, int n){
	queue<pair<int, int>> q;    //Мы храним уже не номера вершин, а координаты клеток.
  q.push({x0, y0});       		//Предполагается использование С++11, в противном случае используйте make_pair
  path[x0][y0] = 1;
  dst[x0][y0] = 0;
	while (!q.empty()) {
    pair<int, int> cur = q.front();
    q.pop();
	  int cur_x = cur.first;
		int cur_y = cur.second;
		for (size_t i = 0; i < moves.size(); ++i) { //---------------------------------------------------------------------------------------------------
			 int move_x = moves[i].first;
			 int move_y = moves[i].second;
	     if ( not_visited(cur_x + move_x, cur_y + move_y) && cur_x + move_x < n &&  cur_y + move_y < n){ //----------
	        q.push( {cur_x + move_x, cur_y + move_y} );
	        path[cur_x + move_x][cur_y + move_y] = 1;
	        dst[cur_x + move_x][cur_y + move_y] = dst[cur_x][cur_y] + 1;
					pair<int,int> p = make_pair(cur_x,cur_y); //---
					parent[cur_x + move_x][cur_y + move_y] = p;
				}
		}
		if (dst[x1][y1] != -1) { break; }
	}
}














int main() {
	int n; cin >> n; // count vertexs
	int x0, y0, x1, y1;
	cin >> x0 >> y0; --x0; --y0;
	cin >> x1 >> y1; --x1; --y1;
	for (int i = 0; i < n; i++) {
     for (int j = 0; j < n; j++) {
        dst[i][j] = -1;
		}
  }


	tobfs(x0, y0, x1, y1, n);
	if (dst[x1][y1] != -1) { cout << dst[x1][y1] << '\n'; print_vertex(x1,y1);}
	return 0;
}
