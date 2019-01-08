#include <iostream>
#include <map>
#include <vector>


using namespace std;

int main(){
	
	freopen("input.txt","r",stdin);

	map<int,int> m;

	int x;

	map<int,int>::iterator it;

	while(cin >> x){
		it =m.find(x);
		if(it == m.end()){
			m[x] = 1;
		}else{
			m[x] = m[x] + 1;
		}	
	}

       vector<pair<int,int> > v;
	
	for(it = m.begin(); it != m.end(); ++it){
		pair<int,int> p = *it;
		if(p.second >= 2){
			v.push_back(p);
		}
	}

	for(int i = 0; i < v.size(); ++i){
		for(int j = i + 1; j < v.size(); ++j){
			if(v[i].second < v[j].second){
				//swap(v[i],v[j]);
				pair<int,int> t = v[i];
				v[i] = v[j];
				v[j] = t;
			}
		}
	}

	for(int i = 0; i < v.size(); ++i){
		cout << v[i].first << " " << v[i].second << endl;	
	}
	
	return 0;
}
