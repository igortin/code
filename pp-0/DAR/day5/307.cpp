#include <iostream>

using namespace std;

double power (double a, int n){
    double res = 1;

    for(int i = 1; i <= n; ++i){
        res = res * a;
    }

    return res;
}

int main(){

    double a;
    int n;    
    cin >> a >> n;
    cout << power(a,n);

    return 0;
}

