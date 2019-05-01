#include <iostream>
using namespace std;




struct node {			// struct node
	int x;
	node * left;
	node * right;
	int count;

	node(int v){		// constructor node
		x = v;
		left = NULL;
		right = NULL;
		count = 1;
	}
};

node * push(node * root, int v){
	if (root == NULL) return new node(v);
	if (root->x > v){
			root->left=push(root->left, v);
			}
		else if (root->x < v) {
			root->right=push(root->right, v);
			}
		else
			root->count= root->count + 1;
	return root;
}

void print(node * root){
	if (root == NULL) return;
	print(root->left);
	cout << root->x << ' ' << root->count << '\n';
	print(root->right);
}


int main(){
	int v;
	node * tree = NULL;
	while(cin >> v){
		if (v == 0) break;
		tree = push(tree, v);
	}
	print(tree);
	return 0;
}
