#include <iostream>
#include <map>


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


       map<int,int>::reverse_iterator it2;

	
	for(it2 = m.rbegin(); it2 != m.rend(); ++it2){
		pair<int,int> p = *it2;
		if(p.second >= 2){
			cout << p.first << ":" << p.second << endl;
		}
	}
	
	return 0;
}
