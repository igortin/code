#include <iostream>

using namespace std;



// siftUP to create heap form zero or appnd element to heap, element goes UP
//suftDown if root element from heap deleted, to rebuild heap with new min element in heap root
// heap solve a problem to find min or max in array. Complexete O(logN).
struct heap{
	private:
		int val[1000];    // create massive 'val' capacity 1000 elements, linux locate empty 1000 ceils in mem.
		int size;		  // pos of element or size not empty ceils of massive


	public:
		heap(){			  // consructor heap, becouse linux locate ceils there is no requirements to create massive
			size = 0;	  // initialize pos/index for element, becouse size = 0, massive empty
		}

		void push(int x){
			val[size] = x;
			sift_up(size);					// last element up to root
			size = size + 1;
		}

		void sift_up(int pos){
			if (pos == 0) { return; }
			int ppos = (pos - 1)/2;
			if (val[pos] < val[ppos]){
				swap(val[pos], val[ppos]);
				sift_up(ppos);
			}
		}


		void sift_down(int pos){
			int c1 = 2 * pos + 1;											// get position of child 1
			int c2 = 2 * pos + 2;											// get position of child 2
			if(c1 < size && val[pos] > val[c1] && val[c1] <= val[c2]){ 		// check pos c1 of child 1 in size range, check value of first element > child 1 value
					swap(val[pos], val[c1]);			// change values in cells
					sift_down(c1);						// call recurse method
			}

			else if(c2 < size && val[pos] > val[c2] && val[c1] >= val[c2]){ 	// check pos c2 of child 2 in size range, check value of first element > child 2 value
					swap(val[pos], val[c2]);			// change values in cells
					sift_down(c2);						// call recurse method
			}

		}

		int extract_min(){
			int res = val[0];			// get value of first element
			val[0] = val[size-1];		// put value of last element to pos 0
			size--;						// becouse before put last elemet to massive val pos 0
			sift_down(0);				// call method with argument pos 0, rebuild heap with min value at root			return res;					// return value res -----
			return res;
		}








		void print(){
			for(int i = 0; i < size; ++i){
				cout << val[i] << ' ';
			}
    }
};


int main(){
	heap h;
	int a[] = {5, 4, 3, 2, 1}; 			// create "a" cappacity 5 elements
	for(int i = 0; i < 5; ++i){ 		// from a push val to heap
		h.push(a[i]);
	}
	for(int i = 0; i < 5; ++i){			// get min element form heap
		cout << h.extract_min() << " ";
	 }
	return 0;}
