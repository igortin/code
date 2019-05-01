#include <iostream>
#include <vector>

using namespace std;

struct node{
    int val;
    node * next;
};

void print(node * x){
    while(x != NULL){
        cout << x->val << endl;
        x = x->next;
    }
}
int main(){

    node m;
    m.val = 8;
    m.next = NULL;

    node n;
    n.val = 5;
    n.next = &m;

    print(&n);

    return 0;
}