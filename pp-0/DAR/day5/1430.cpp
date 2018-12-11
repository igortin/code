#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 1; n > 0; ++i){
        for(int j = 1; n > 0 &&  j <= i; ++j){
            cout << i << " ";
            --n;
        }
    }

    return 0;
}

