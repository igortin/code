#include <iostream>
#include <vector>
#include <set>

using namespace std;

void f(set<int> *res, int a, int b, int n){
    for(int i = a; i <=n; i = i + b){
        if(i % 7 == 0 || (i + 1) % 7 == 0) continue;
        res->insert(i);
    }
}

void printV(vector<int> *v){
    /*for(int i = 0; i < v->size(); ++i){
        cout << v->at(i) << " ";
    }*/
    vector<int>::iterator it;
    for( it = v->begin();it != v->end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){

    int n,m,a,b;
    cin >> n >> m;
    set<int> s;
    for(int i = 0; i < m; ++i){
        cin >> a >> b;
        f(&s,a,b,n);
    }

    cout << s.size() << endl;

    return 0;
}