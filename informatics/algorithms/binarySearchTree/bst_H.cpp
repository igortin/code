    #include <iostream>



    using namespace std;

    struct node {           // struct node
        int val;
        node * left;
        node * right;
        public:
        node(int x){        // constructor node
            val = x;
            left = NULL;
            right = NULL;
        }

    };

    node * push(node * root, int v){
        if (root == NULL) return new node(v);       // if not exist release root
        if (root->val > v){                     // if val of root in mem cell > the number
                root->left=push(root->left, v);
                }
            else if (root->val < v) {               // if val of root in mem cell < the number value
                root->right=push(root->right, v);
                }
        return root;
        }                               // return mem cell about root

    void print(node * root){
        if (root == NULL) return;                   // if root no exist break
        print(root->left);                          // call recurse with mem cell
        cout<< root->val << ' ';                    // when leaf return cout val
        print(root->right);}                        // call recurse with mem cell



    int get_h(node * root){
        if (root == NULL) return 0;
        int lh = get_h(root->left)  + 1;
        int rh = get_h(root->right) + 1;

        if (lh >= rh) return lh;
        return rh;}

    int main(){
        int v;
        node * tree = NULL;
        while(cin >> v){
            if (v == 0) break;
            tree = push(tree, v);
        }
        // cout << tree->val << '\n';
        cout << get_h(tree) << '\n';

    return 0;
    }
