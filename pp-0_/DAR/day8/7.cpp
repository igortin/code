#include <iostream>
#include <map>
#include <vector>


using namespace std;

bool f(pair<int,int> l, pair<int,int> r){
 	if(l.second > r.second) return true;
 	else if(l.second == r.second){
 		if(l.first > r.first) return true;
 		else return false;
 	}
 	return false;
}

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

	sort(v.begin(),v.end(),f);

	for(int i = 0; i < v.size(); ++i){
		cout << v[i].first << " " << v[i].second << endl;	
	}
	
	return 0;
}
