#include <iostream>
#include <vector>

using namespace std;

struct node{
    int val;
    node * next;
    node(int x){
        val = x;
        next = NULL;
    }
};

void print(node * x){
    while(x != NULL){
        cout << x->val << endl;
        x = x->next;
    }
}
int main(){

    node n(5);
    node n2(15);
    node n3(25);
    node n4(55);

    n.next = &n2;
    n2.next = &n3;
    n3.next = &n4;

    print(&n);

    return 0;
}