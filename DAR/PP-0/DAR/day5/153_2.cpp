#include <iostream>

using namespace std;

int a[50];

int f(int n){
    if(a[n] != -1) return a[n];
    a[n] = f(n-1) + f(n-2);
    return a[n];
}

int main(){

    a[0] = 0;
    a[1] = 1;

    for(int i = 2; i < 50; ++i){
        a[i] = -1;
    }

    int n;
    cin >> n;

    cout << f(n) << endl;

    return 0;
}

