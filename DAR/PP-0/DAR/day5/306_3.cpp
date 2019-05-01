#include <iostream>

using namespace std;

int min2(int a, int b){
    if(a > b) return b;
    return a;
}
int min4 (int a, int b, int c, int d){
    return min2(min2(a,b),min2(c,d));
}

int main(){

    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << min4(a,b,c,d);
    
    return 0;
}

