#include <iostream>

using namespace std;

struct node{
	node * left;
	node * right;
	int val;
	node(int x){
		val = x;
		left = NULL;
		right = NULL;
	}
};

node * add(node * root, int x){
	if(root == NULL) {
		return new node(x);
	}else{
		if(root->val > x){
			root->left = add(root->left, x);
		}else if(root->val < x){
			root->right = add(root->right, x);
		}
	}
	return root;
}

node * find(node * root, int x){
	if(root == NULL) return NULL;
	if(root->val == x) return root;
	if(root->val > x) return find(root->left, x);
	return find(root->right, x);
}

void print(node * root){
	if(root == NULL) return;
	print(root->left);
	cout << root->val << " ";
	print(root->right);
}

int main(){

	int a[] = {1, 2, -3, 20, 21, 4, 5, 8};

	node * tree = NULL;

	for(int i = 0; i < 8; ++i){ tree = add(tree, a[i]); }

	print(tree);
	return 0;}
