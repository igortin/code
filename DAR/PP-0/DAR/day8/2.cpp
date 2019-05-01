#include <iostream>
#include <map>


using namespace std;

int main(){
	
	freopen("input.txt","r",stdin);

	map<int,int> m;

	int x;

	while(cin >> x){
		m[x] = m[x] + 1;
	}

	map<int,int>::iterator it;

	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << ":" << (*it).second << endl;
	}
	
	return 0;
}
