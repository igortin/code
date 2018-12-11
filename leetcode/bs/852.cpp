class Solution {
public:         
int peakIndexInMountainArray(vector<int>& A) {     
        int l = 0;
        int r = A.size() -1;
        return get_peak(A,l,r);    
        }
    int get_peak(vector<int>& A, int l, int r){
        int m = l + (r - l)/2; -
        if (m == l) return l; 
        if (A[m] > A[l]) {  
           l = m;             
        return   get_peak(A,l,r);
        }
        else if (A[m] < A[l]){
           l = l - 1;
           r = m;
        return get_peak(A,l,r);
        }  return l;
    }
}
;
