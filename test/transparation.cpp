#include<iostream>

#include<vector>

using namespace std;

vector<vector<int> > arr; string r = "NO";
vector<bool> path; vector<int> temp;
void dfs(int i, int t){
	    path[i] = 1;
			for (size_t j = 0; j < arr[i].size(); ++j) //---
	        { if(!path[arr[i][j]]){
	            if (t == arr[i][j]) { r = "YES" ; break; }
							dfs(arr[i][j], t);
	        }
				}
	}
void to_print(){
	for (size_t i = 0 ; i < arr.size(); ++i) //---
			{				for (size_t j = 0; j < arr[i].size(); ++j) //-------
					{	cout << arr[i][j] << ' '; }
			cout << '\n';
			}
		}
int main(){
  int n,t,a;
	cin >> n >> t; t --;
  path.resize(n);
	arr.resize(n);
	for(int i = 0; i < n; ++i){ path[i] = 0;}
	for(int i = 0; i < n - 1; ++i){
			cin >> a;
			arr[i].push_back(a+i);
		}


	dfs(0, t); cout << r << '\n';
	return 0; }
