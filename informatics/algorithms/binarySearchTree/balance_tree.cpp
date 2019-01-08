#include <iostream>



using namespace std;

struct node {           // struct node
    int val;
    node * left;
    node * right;
    node(int x){        // constructor node
        val = x;
        left = NULL;
        right = NULL;
    }
};

node * push(node * root, int v){
    if (root == NULL) return new node(v);
    if (root->val > v){
            root->left=push(root->left, v);
            }
        else if (root->val < v) {
            root->right=push(root->right, v);
            }
    return root;
    }

void print(node * root){
    if (root == NULL) return;
    print(root->left);
    cout<< root->val << ' ';
    print(root->right);}

node * get_max(node * root){
    if (root == NULL) return root;
    if (root->right == NULL) return root;
    return get_max(root->right);
    }

void vdelete(node * root, int v){
    if (root == NULL) return;
    if (root->val > v){
        return vdelete(root->left, v);
        }
    else if (root->val < v) {
        if (root->right->val == v){
            if (root->right->left == NULL){
                root->right = NULL;
                }
            else {
                root->right = root->right->left;
                }
            }
        else
            return vdelete(root->right, v);
        }
    }


















void print_root_one(node * root){
    if (root == NULL) return;
    else {
        print_root_one(root->left);

        if  (root->right == NULL && root->left != NULL)
            { cout << root->val << '\n';}
        else if (root->right != NULL && root->left == NULL)
            { cout << root->val << '\n';}
        print_root_one(root->right); }
  }


int get_c(node * root){
    int count = 1;
    if (root == NULL) return 0;
    else {
        count += get_c(root->left);
        count += get_c(root->right);
        }
        cout << count;
    return count;
}

int get_h(node * root) {
    if (root == NULL) return 0;
        int lh = get_h(root->left) + 1;
        int rh = get_h(root->right) + 1;
        if (lh >= rh) return lh;
        return rh;
    }






string balance_test(node * root){
    if (get_h(root->left) - get_h(root->right) > 1 || get_h(root->right) - get_h(root->left) > 1) { return "NO"; }
    else if (get_h(root->right) -   get_h(root->left) > 1 || get_h(root->left) -    get_h(root->right) > 1) { return "NO"; }
    return "YES";
}



string print_balance(node * root){
    if (root == NULL) return ""; // cout << root-> val << ' ';
    if ( print_balance(root->left) == "NO" || print_balance(root->right) == "NO" ) return "NO";
    return balance_test(root);
    }

int main(){
    int v;
    node * tree = NULL;
    while(cin >> v){
        if (v == 0) break;
        tree = push(tree, v);
    }
    cout << print_balance(tree) << '\n';

    return 0;
}
