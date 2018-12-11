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
     
     
     
    int get_n(node * root){
        if (root == NULL) return 0;
        int count = 1;
     
        count += get_n(root->left); 
        count += get_n(root->right);  
        return count;
        }
     
     
    int main(){
        int v;
        node * tree = NULL;
        while(cin >> v){
            if (v == 0) break;
            tree = push(tree, v);
        }
        cout << get_n(tree) << '\n'; return 0;}

#include <iostream>



using namespace std;

struct node {			// struct node
	int val;			
	node * left;		 
	node * right;		
	public:
	node(int x){		// constructor node
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



int get_n(node * root){
	if (root == NULL) return 0;
	int count = 1;

	count += get_n(root->left); 
	count += get_n(root->right); 	
	return count;
	}


int main(){
	int v; 
	node * tree = NULL;
	while(cin >> v){
		if (v == 0) break;
		tree = push(tree, v);
	}
	cout << get_n(tree) << '\n'; return 0;}
