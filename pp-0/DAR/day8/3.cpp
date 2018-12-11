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

	
	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << ":" << (*it).second << endl;
	}
	
	return 0;
}
