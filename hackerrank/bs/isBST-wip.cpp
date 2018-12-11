/*
The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	
    }
*/
    bool negative(Node * root){
        if (root->left != NULL && root->right !=NULL) {
                if ((root->left->data > root->data) || (root->right->data < root->data)) 
                    return false;
                    }
        else if (root->left != NULL && root->right == NULL){ 
                if (root->left->data > root->data) return false;
                    }
        else if (root->right != NULL && root->left == NULL){ 
                if (root->right->data < root->data) return false;
                    }
        return true; 
        }

bool checkBST(Node* root) {
       if (root == NULL) return true; 
       bool l = checkBST(root->left); 
       bool r = checkBST(root->right);
       if ( l == false ||  r == false) return false;     
       return negative(root);
	}
