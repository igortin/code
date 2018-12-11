#include <iostream>

using namespace std;



struct heap {
	private:
		int val[100001];
		int size;
	public:
		heap(){
			size = 0;
		}
		void Sift_Up(int pos){
			if (pos == 0) return; // ---

			int ppos = (pos - 1) / 2;
			if (val[pos] >= val[ppos]){
				swap(val[pos],val[ppos]);
				Sift_Up(ppos);
				}
		}

		int Sift_Down(int pos){
 			int c1 =  2 * pos + 1 ;  // ---
			int c2 =  2 * pos + 2 ; // ---
			if (c1 < size){
				if (c2 < size){
					if (val[pos] < val[c1] && val[c1] > val[c2]){
							swap(val[pos],val[c1]);
							return Sift_Down(c1);}
					else if (val[pos] < val[c2] && val[c1] < val[c2]) {
						swap(val[pos],val[c2]);
						return Sift_Down(c2);
						}
					}

				else if (val[pos] < val[c1]) {
					swap(val[pos],val[c1]);
					return Sift_Down(c1);
					}
				}
			return pos + 1; }		// ---
						 
		
			

		void push(int x){
			val[size] = x;
			// Sift_Up(size);
			size = size + 1; ------
		}
        void print(){
			for (int i = 0; i < size; i++){  
				cout << val[i] << ' ';
			}
		}
		void decrease(int pos, int k){
			val[pos] = val[pos] - k; 
			cout << Sift_Down(pos) << '\n'; 
		}
};

int main(){
	heap h; 
	int n;
	int x, count, index, k; 
	cin >> n;
	for (int i = 0; i < n; i++) { 				
		cin >> x; 
		h.push(x);
	}
	cin >> count;	
	for (int i = 0; i < count; i++) { 			}
	 	cin >> index; 
	 	cin >> k; 								//index = index - ;
	 	h.decrease(--index, k); 
		}
h.print();
return 0;}