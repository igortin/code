#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
long long hash_text(vector<long long>& p_pow, string s){
  long long hash_s = 0;
  for (size_t i=0; i<s.length(); ++i)  hash_s += (s[i] - 'a' + 1) * p_pow[i]; 
  return hash_s;
}

// check account
string check_account(vector<long long>& p_pow, vector<long long>& account_names, string account, int k, string no){
  bool m = 0; long long hash_s = hash_text(p_pow, account);
  for (int i = 0; i < account_names.size(); i++)  { 
      if (hash_s == account_names[i])
      { k = k + 1; 
        account = no + char(k + 48);   
        m = 1;
        break;
      }
  }
  if (m == 0) {
      account_names.push_back(hash_s);
      return  account;
  }
  return check_account(p_pow, account_names, account, k, no);
}

int main() {
  int count;
  string account;
  std::cin >> count;
  std::vector<long long> account_names;
  const int p = 31;
  vector<long long> p_pow (32);
  p_pow[0] = 1;
  for (size_t i=1; i<p_pow.size(); ++i)   
    p_pow[i] = p_pow[i-1] * p;
  for (int i = 0; i < count; i++) {
      std::cin >> account; string no = account;
      string temp = check_account(p_pow, account_names, account, 0, no);
      if  ( temp == account) { cout << "OK" << '\n';
      }
      else
          cout << temp << '\n';
      } return 0; }

