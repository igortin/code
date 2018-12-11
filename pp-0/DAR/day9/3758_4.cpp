#include <iostream>
#include <vector>
#include <set>

using namespace std;

set<int> s;

void f(int a, int b, int n){
    for(int i = a; i <=n; i = i + b){
        if(i % 7 == 0 || (i + 1) % 7 == 0) continue;
        s.insert(i);
    }
}

int main(){

    int n,m,a,b;
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        cin >> a >> b;
        f(a,b,n);
    }

    cout << s.size() << endl;

    return 0;
}