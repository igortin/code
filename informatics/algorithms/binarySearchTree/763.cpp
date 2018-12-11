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




void print_root_one(node * root){
	if (root == NULL) return;					
	else {
		print_root_one(root->left);							 
		if 	(root->right == NULL && root->left != NULL)
		 	{ cout << root->val << '\n';}
		else if	(root->right != NULL && root->left == NULL)
		 	{ cout << root->val << '\n';}
		print_root_one(root->right); }
  }
int main(){
	int v; 
	node * tree = NULL;
	while(cin >> v){
		if (v == 0) break;
		tree = push(tree, v);
	} 
	print_root_one(tree);
	return 0;}