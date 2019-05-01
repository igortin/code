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
    void add(int x){
        value[size] = x;
        sift_up(size);
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
        if(pos == 0) return 0;
        int parent_pos = (pos - 1) / 2;
        if(value[parent_pos] < value[pos]){
            swap(value[parent_pos], value[pos]);
            return sift_up(parent_pos);
        }
        return pos;
    }
    int sift_down(int pos){
        int ch1 = 2 * pos + 1;
        int ch2 = 2 * pos + 2;
        if(ch1 < size){
            if(ch2 < size){
                if(value[pos] < value[ch1] && value[ch1] > value[ch2]){
                    swap(value[pos], value[ch1]);
                    return sift_down(ch1);
                }
                else if(value[pos] < value[ch2] && value[ch2] > value[ch1]){
                    swap(value[pos], value[ch2]);
                    return sift_down(ch2);
                }
            }
            else if(value[pos] < value[ch1]){
                swap(value[pos], value[ch1]);
                return sift_down(ch1);
            }
        }
        return pos;
    }
    int extract_max(){
        int res = value[0];
        value[0] = value[size-1];
        size--;
        sift_down(0);
        return res;
    }


    void print(){
        for(int i = 0; i < size; ++i){
            cout << value[i] << " ";
        }
    }
};

int main(){
    heap h;
    int n;
    cin >> n;
    int v;
    for(int i = 0; i < n; ++i){
        cin >> v;
        h.add(v);
    }
    int k, p, d;
    cin >> k;
    for(int i = 0; i < k; ++i){
        cin >> p >> d;
        cout << h.decrease(p - 1, d) + 1 << endl;
    }
    h.print();
    return 0;
}
