#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;

    int n;
    int x;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }

    int l = 0;
    int r = l + 1;

    while(l < v.size()){
        while(r < v.size() && v[l] == v[r]){
            r++;
        }
        if(r - l >= 3){
            v.erase(v.begin() + l,v.begin() + r);
            l = 0;
            r = l + 1;
        }else{
            l = r;
            r = l + 1;
        }
    }

    cout << n - v.size() << endl;

    return 0;
}