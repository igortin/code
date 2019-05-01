#include <iostream>
#include <map>


using namespace std;

int main(){
	
	map<int,int> m;

	m[0] = 1;
	m[10] = 21;

	cout << m[0] << "  " << m[10] << endl;
	cout << m[2] << endl;

	return 0;
}