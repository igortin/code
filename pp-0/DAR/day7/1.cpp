#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> s;

    int a[] = {1,1,1,-1,2,3,4,5,8,9,10,1,1,-1,-2};

    for(int i = 0; i < 15; ++i){
        s.insert(a[i]);    
    }

    cout << s.size() << endl;

    for(set<int>::iterator it  = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}