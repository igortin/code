class Solution {
public:
  vector<int> a;
  vector<int> twoSum(vector<int>& numbers, int target) {
     return summa(numbers, target,0,numbers.size()-1); }

  vector<int> summa(vector<int>& numbers, int target, int l, int r){
      int m = l + (r - l)/2;
      if (numbers[m] > target){
          r = m;
          return summa(numbers, target,l,r);
      }
      if ( numbers[l] + numbers[r]  == target) {
          a.push_back(l+1); a.push_back(r+1);
          return a;
      }

      r = r - 1;
      summa(numbers, target,l,r);

      l = l + 1;
      summa(numbers, target,l,r);
  }
};
