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
            cout << sift_up(size) << '\n';
            size++;
        }
        int increase(int pos, int d){
            value[pos] += d;
            return sift_up(pos);
        }
        int decrease(int pos, int d){
            value[pos] -= d;
            return sift_down(pos);
        }
        int sift_up(int pos){
            if(pos == 0) return 1;
            int parent_pos = (pos - 1) / 2;
            if(value[parent_pos] < value[pos]){
                swap(value[parent_pos], value[pos]);
                return sift_up(parent_pos);
            }
            return pos + 1;
        }
        int sift_down(int pos){
            int ch1 = 2 * pos + 1;
            int ch2 = 2 * pos + 2;
            if(ch1 < size){
                if(ch2 < size){
                    if(value[pos] < value[ch1] && value[ch1] >= value[ch2]){
                        swap(value[pos], value[ch1]);
                        return sift_down(ch1);
                    }
                    else if (value[pos] < value[ch2] && value[ch2] > value[ch1]){
                        swap(value[pos], value[ch2]);
                        return sift_down(ch2);
                    }
                }
                else if (value[pos] < value[ch1]){
                    swap(value[pos], value[ch1]);
                    return sift_down(ch1);
                }
            }
            return pos + 1;
        }
        int length(){
          return size;
        }
        int extract_max(){
            int res = value[0];
            value[0] = value[size-1];
            size--;
            cout << sift_down(0) << ' ';
            return res;
          }

        int extract_root(){
            int res = value[0];
            size--;
            return res;
        }
        void print(){
            for(int i = 0; i < size; ++i){
                cout << value[i] << " ";
            }
        }
        int heap_delete(int pos){
            int res = value[pos];
            value[pos]=value[size -1];
            size--;
            if (value[pos] > res) {
              sift_up(pos);
            }
            else if (value[pos] < res) sift_down(pos);
            return res;
        }
};

struct pqueue{
    private:
        heap h;
        int capacity;
    public:
        pqueue(int n){
            capacity = n;
        }
        void enqueue(int x){
          if (h.length() >= capacity) {
              cout << -1 << '\n';
          }
          else { h.push(x); }
        }
        void dequeue(){
            if(h.length() == 0) {
                cout << -1 << '\n';
            }
            else if (h.length() == 1) {
                cout << 0 << ' ';
                cout << h.extract_root() << '\n';
            }
            else {
                cout << h.extract_max() << '\n';
            }
        }
        void pprint(){
            h.print();
        }
        int pdelete(int pos){
            pos--;
            if (h.length() - 1 < pos || pos == -1) cout << -1 << '\n';
            else
                cout << h.heap_delete(pos) << '\n';
        }
};

int main(){
    int n, m, v, t, pos;
    cin >> n;
    pqueue p(n);
    cin >> m;
    for(int i = 0; i < m; ++i){
        cin >> t;
        if (t == 2) {
          cin >> v;
          p.enqueue(v);
        }
        else if (t == 1) {
          p.dequeue();
        }
        else if (t == 3) {
          cin >> pos;
          p.pdelete(pos);
        }
    }
    p.pprint();
    return 0;
   }
