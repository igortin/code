class Solution {
public:

    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL) return NULL;
        if (root->val == val) return root;
        else if (root->val > val) return searchBST(root->left,val);    
        return searchBST(root->right,val);
        }     



    TreeNode* print_tree(TreeNode* root) {
        if (root == NULL) return NULL;
        print_tree(root->left);
        cout << root->val<< ' ';   
        print_tree(root->right);
        }
};
