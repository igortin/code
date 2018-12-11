#include <iostream>



using namespace std;

struct node {			// struct node
	int val;			
	node * left;		 
	node * right;		
	node * parent;
	node(int x){		// constructor node
		val = x;
		left = NULL;
		right = NULL;
	} 
};

node * push(node * root, int v){				
	if (root == NULL) return new node(v);     
	if (root->val > v){
			root->parent =  					
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














int main(){
	int v; 
	node * tree = NULL;
	while(cin >> v){
		if (v == 0) break;
		tree = push(tree, v);
	} // print(tree); cout << '\n';
	v = get_max(tree)->val; 
	// cout << v << '\n'; vdelete(tree, v); print(tree);
	if (tree->val == v){
		cout << get_max(tree->left)->val << '\n';
	} else {
		vdelete(tree, v);
		cout << get_max(tree)->val << '\n';
	}	
	return 0;}