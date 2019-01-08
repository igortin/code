#include <iostream>
#include <map>

using namespace std;

map<int, int> m;

int f(int n){
    if(m.find(n) != m.end()) return m[n];
    m[n] = f(n-1) + f(n-2);
    return m[n];
}

int main(){

    m[0] = 0;
    m[1] = 1;

    int n;
    cin >> n;

    cout << f(n) << endl;

    return 0;
}

