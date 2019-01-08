#include <iostream>

using namespace std;



struct heap{
  private:
      int value[100001];
      int size;
  public:
      heap(){
          size = 0;
      }

      void push(int x){
          value[size] = x;
          // cout << sift_up(size) << '\n';
          size++;
      }

      int sift_up(int p){
          if(p == 0) return 1;
          int parent_p = (p - 1) / 2;
          if(value[parent_p] < value[p]){
              swap(value[parent_p], value[p]);
              return sift_up(parent_p);
          }
          return p + 1;
      }
      int sift_down(int p){
          int ch1 = 2 * p + 1;
          int ch2 = 2 * p + 2;

          if(ch1 < size){
              if(ch2 < size){
                  if(value[p] < value[ch1] && value[ch1] >= value[ch2]){
                      swap(value[p], value[ch1]);
                      return sift_down(ch1);
                  }else if(value[p] < value[ch2] && value[ch2] > value[ch1]){
                      swap(value[p], value[ch2]);
                      return sift_down(ch2);
                  }
              }else if(value[p] < value[ch1]){
                  swap(value[p], value[ch1]);
                  return sift_down(ch1);
              }
          }

          return p + 1;
      }

    int length(){
        return size;
    }


   void print(){
        for(int i = 0; i < size; ++i){
            cout << value[i] << " ";
        }
    }







  void Build_Heap(){
		if (size <= 1) return;
		for (int i = (size)/2 -1; i > -1; i--){
      sift_down(i);
    }
	}
};

int main(){
  int n, k; heap h;
  cin >> n;
  for(int i = 0; i < n; ++i){ cin >> k; h.push(k);}
	cout << ' ';
	for(int i = 0; i < n; ++i){ h.Build_Heap(); h.print();}
return 0;}
