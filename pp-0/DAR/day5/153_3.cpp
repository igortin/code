#include <iostream>

using namespace std;

int a[50];

int f(int n){
    if(a[n] != -1) return a[n];
    a[n] = f(n-1) + f(n-2);
    return a[n];
}

int main(){

    memset(a,-1,sizeof(a));

    a[0] = 0;
    a[1] = 1;

    int n;
    cin >> n;

    cout << f(n) << endl;

    return 0;
}

