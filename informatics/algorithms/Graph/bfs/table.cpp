#include <iostream>
#include <utility>
#include <queue>

using namespace std;

int color[501][501];
int dst[501][501];
vector<pair<int, int>> moves {{1, 0},{0,1},{-1,0},{0,-1}};

void print_dst(int n, int m){
for (size_t i = 0; i < n; ++i){
		for (size_t j = 0; j < m; ++j)
			{	cout << dst[i][j] << ' ';}
		cout << '\n';
	}
}

void color_clear(int n, int m) {
	for (int i = 0; i < n; i++) {
		 for (int j = 0; j < m; j++) { color[i][j] = 0;}
	}
}

bool not_visited(int x, int y, int n, int m) {
	return x >= 0 && x < n && y >= 0 && y < m && !color[x][y];
}

void tobfs(int x, int y, int m, int n){
		queue<pair<int, int>> q;
	    q.push({x, y});			// push x,y pair
			color[x][y] = 1;		// mark cell was
	    dst[x][y] = 0;			// distance from x1,y1
	    while (!q.empty()) {
	      pair<int, int> cur = q.front();
	      q.pop();
	      int cx = cur.first;
				int cy = cur.second;
				for (size_t i = 0 ; i < moves.size(); ++i){
						int px = cx + moves[i].first;
						int py = cy + moves[i].second;
						if (not_visited(px, py, n, m)) {
							color[px][py] = 1;
							if (dst[cx][cy] + 1 < dst[px][py]) { dst[px][py] = abs(x - px) + abs(y - py); q.push({px, py});}
						}
				}
			}
		}



int main() {
	int n,m,a;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
     for (int j = 0; j < m; j++) {
			 dst[i][j] = 1e9;
		 }
	}
	for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
			 	cin >> a;
				if (a != 0) {
					tobfs(i,j,m,n);
					color_clear(n,m);

					}
  		}
	}
	print_dst(n, m); return 0;
}
