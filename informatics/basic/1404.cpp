#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;
struct Student{
    string familia; string name;
    int clnum;
    char ch;
    string happy_birth;
};


vector<Student> st;
void append_student_p(string familia, string name, string clas, string happy_birth){
    Student s;
    string temp, num;
    int num_temp = 0;
    s.familia = familia;
    s.name = name;
    temp = clas.substr(0, clas.length()-1);
    s.ch = clas[clas.length() - 1];
    for (int i = 0; i < temp.size(); ++i) {
      num_temp = 10 * num_temp + (temp[i] - 48);
    }
    s.clnum = num_temp;
    s.happy_birth = happy_birth;
    st.push_back(s);
}

bool f( Student l, Student r ){
    if ( l.clnum < r.clnum ) return 1;
    else if ( l.clnum == r.clnum ) {
       if (l.ch < r.ch) { return 1; }
       else if (l.ch == r.ch) {
            if (l.familia < r.familia) { return 1; }
            }
        }
    return 0;
}


int main(){
  string happy_birth, clas, familia, name;
  int n;
  Student s;
  cin >> n;
  for (int i = 0; i < n; ++i){
      cin >> familia;
      cin >> name ;
      cin >> clas ;
      cin >> happy_birth;
      append_student_p(familia, name, clas, happy_birth);
    }
  sort(st.begin(), st.end(),f);
  for (int i = 0; i < st.size(); ++i){
       cout << st[i].clnum << st[i].ch << " " << st[i].familia << " " << st[i].name  << ' ' << st[i].happy_birth<< '\n';
     }
  return 0;
}
