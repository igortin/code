#include <iostream>

using namespace std;



struct heap {
	private:
		int val[100000];
		int size;
	public:
		heap(){
			size = 0;
		}
		int Sift_Up(int pos){
			if (pos == 0) return 1; // ---
			int ppos = (pos - 1) / 2;
			if (val[pos] >= val[ppos]){
				swap(val[pos],val[ppos]);
				return Sift_Up(ppos);
				}
			else 
				return pos + 1; // ---
		}	
		void push(int x){
			val[size] = x;
			Sift_Up(size);
			size = size + 1; ------
		}
        void print(){
			for (int i = 0; i < size; i++){  
				cout << val[i] << ' ';
			}
		}
		void get_index(int pos, int k){
			val[pos] = val[pos] + k; 
			cout << Sift_Up(pos); 
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
	 	cin >> k; 								//index = index -;
	 	h.get_index(--index, k); 
	 	cout << '\n';
		}
	h.print(); 
return 0; }
