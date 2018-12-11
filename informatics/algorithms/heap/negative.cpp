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
		int Sift_Up(int pos){
			if (pos == 0) return 1; // ---

			int ppos = (pos - 1) / 2;
			if (val[pos] > val[ppos]){
				swap(val[pos],val[ppos]);
				return Sift_Up(ppos);
				}
			else 
				return pos + 1;
		}
		int Sift_Down(int pos){
 			int c1 =  2 * pos + 1 ;  // ---
			int c2 =  2 * pos + 2 ; // ---
			if (c1 < size){
				if (c2 < size){
					if (val[pos] < val[c1] && val[c1] >= val[c2]){
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
			cout << Sift_Up(size) << '\n';
			size = size + 1; ------
		}

        void print(){
			for (int i = 0; i < size; i++){  
				cout << val[i] << ' ';
			}
		}







		
		
		int heap_size(){
			return size; // ---
			}
		
		void extract_element(){
			int res = val[0];			// get value of first element
			if (size > 1) {
				val[0] = val[size-1];		// put value of last element to pos 0
				size--;						// becouse before put last elemet to massive val pos 0
				cout << Sift_Down(0) << ' ';				// call method with argument pos 0, rebuild heap with min value at root			return res;					// return value res -----
				cout << res << '\n';
			}
			else if (size == 1) {
				int res = val[0];
				size--;
				cout << 0 << '\n';
				cout << res << '\n';}
			else
				cout << -1 << '\n';
			}


		void element_delete(int pos){
			int res = val[pos];
			val[pos]=val[size-1]; size--;
			if (val[pos] < res || val[pos] == res) Sift_Down(pos);
			else Sift_Up(pos);
			cout << res << '\n';}
	};



int main(){
	heap h; 
	int n, count ;
	int t, x, ps; 
	cin >> n >> count;
	for (int i = 0; i < count; i++) { 				-
		cin >> t;
		if (t == 1){ h.extract_element(); }

		else if (t == 2) {
			cin >> x;
			if (n > h.heap_size()){
				h.push(x); // h.print(); cout << '\n';
			} else 
				{ cout << -1 << '\n';}
		} 
		else if (t == 3){
			cin >> ps;
			if (ps > h.heap_size()){ cout << -1 << '\n'; }
			else { h.element_delete(ps - 1); } 
			}
		} h.print(); return 0;}