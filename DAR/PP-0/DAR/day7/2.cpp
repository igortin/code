#include <iostream>
#include <set>

using namespace std;

int main(){

/*    
    a = 2,b = 3,c = 5

    a^0*b^0*c^0 = 1
    a^1*b^0*c^0 = 2
    a^0*b^1*c^0 = 3

    a ^ (0.....)
    b ^ (0.....)
    c ^ (0.....)

    */

   /*
   for(int i = 0; i < 1000; ++i){
       for(int j = 0; j < 1000; ++j){
           for(int k = 0; k < 1000; ++k){
               int n = pow(2,i) * pow(3,j) * pow(5,k);
           }
       }
   }*/

   int n,k = 0;
   cin >> n;

   set<long long> s;
   s.insert(1);
   long long v;
   
   while(k!=n){
       k++;
       v = *s.begin();
       s.erase(s.begin());
       s.insert(v * 2);
       s.insert(v * 3);
       s.insert(v * 5);
   }

   cout << v << endl;

   return 0;
}

//1,2,3,4,5,6,8,9,10,12,15
//1 2 3 4 5 6 7 8  9 10 11