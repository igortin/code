#include <iostream>
using namespace std;




// heap solve a problem to find min or max.Complexete O(logN). 
//          w[0] - pointer to memory cell   			
//		      |				
//			  0  1  2 - element's index
// w[100] = { 7, 3, 2,_pos_,.......}
//          | |_ _ _ |			   |								
//		    |  size=3	     	   |
//			|_ _ _ _ _ _ _ _ _ _ _ |
//			     capacity = 100	

struct heap {
	private:
		int w[1000];      // create massive 'w' capacity 1000 elements, linux locate empty 1000 cells in mem
		int size;		  // position of element or size not empty ceils of massive
	public:	
		heap(){			  // constructor heap, becouse linux locate cells there is no requirements to create massive 	
			size = 0;	  // initialize _pos_/_index_ for element, becouse 'w' size = 0, massive cells empty
		}

// a)			  	   7 O 
//		 		   		/ \
//	   		   		2  O   O	3
//              	  /
// pos=3, x=1 	  1  O 	   

		void push(int x){		 
			w[size] = x;		// x appended 'w' like last element on pos 3
			sift_up(size);		// call method (argument - position of element) for position = size, where locate 'x' 
			size = size + 1;
		}


// b)			  	   7 O 
//		 		   		/ \
// ppos=(3-1)/2 	2  O   O	3
// 				  	  /
// pos=3, x=1 	  1  O

// c)	  7 O 
//		   / \
//	   1 O   O	 3
//       /
//	  2 O

// d)	  1 O 
//		   / \
//	   7 O   O	 3
//       /
//	  2 O


		void sift_up(int pos){				// pos - position of element x, ppos - position of parent, pos/ppos - positions has pointers to cells	
			if(pos == 0) return;			// does element has childs ?, if no then exit, becouse there is 1 element in 'w' with position pos = 0 
			int ppos = (pos - 1) / 2;		// else if x pos > 0, parent position ppos = (pos of element -1)/2 	
			if(w[ppos] > w[pos]){			// if parent value > value element then swap values (b|c)
				swap(w[pos], w[ppos]);  
				sift_up(ppos);				// call recursion method -> ppos pointer to cell value = 1 (d)  
			}
		}




		int get_min(){						
			return w[0];					// get value from root of tree
		}	

		void print(){						// check heap
			for(int i = 0; i < size; ++i){
				cout << w[i] << " ";
			}
		}
};

int main(){
	int a[] = {5, 4, 3, 2, 1}; 				
	heap h;		
	for(int i = 0; i < 5; ++i){ 			//from a push x to heap
		h.push(a[i]);}
	cout << h.get_min() << '\n';
	return 0;}