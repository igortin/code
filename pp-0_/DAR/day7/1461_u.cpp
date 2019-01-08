#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);

    v.erase(v.begin() + 0, v.begin()+ 3);

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
  

    return 0;
}