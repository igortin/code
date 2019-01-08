#include <iostream>

using namespace std;

bool arr[1000001];

void mark(int a, int b, int n){
    for(int i = a; i <=n; i = i + b){
        if(i % 7 == 0 || (i + 1) % 7 == 0) continue;
        arr[i] = true;
    }
}

int main(){

    int n,m,a,b;
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        cin >> a >> b;
        mark(a,b,n);
    }

    int cnt = 0;
    for(int i = 1; i <= 1000000; ++i){
        if(arr[i]){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}