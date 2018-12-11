#include <iostream>
#include <map>

using namespace std;

map<int,bool> mm;

void mark(int a, int b, int n){
    for(int i = a; i <=n; i = i + b){
        if(i % 7 == 0 || (i + 1) % 7 == 0) continue;
        //mm[i] = true;
        mm.insert(make_pair(i,true));
    }
}

int main(){

    int n,m,a,b;
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        cin >> a >> b;
        mark(a,b,n);
    }

    cout << mm.size() << endl;

    return 0;
}