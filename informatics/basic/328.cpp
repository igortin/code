#include <iostream>
#include<vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;
struct Student{
    string familia;
    string name;
    int mathematics;
    int phisics;
    int informatics;
    void printInfo(){
      cout << mathematics << " " << phisics << " " << informatics <<  '\n';
    }
  };

vector<Student> st;
void append_student_list(string familia, string name, int mathematics, int phisics, int informatics){
    Student s;
    s.familia = familia;
    s.name = name;
    s.mathematics = mathematics;
    s.phisics = phisics;
    s.informatics = informatics;
    st.push_back(s);
}

int main(){
    int mathematics, phisics, informatics, n;
    string familia, name;
    Student s;
    cin >> n;
    for (int i = 0; i < n; ++i){
      cin >> familia;
      cin >> name ;
      cin >> mathematics ;
      cin >> phisics;
      cin >> informatics;
      append_student_list(familia, name, mathematics, phisics, informatics);
    }

    for (int i = 0; i < st.size(); ++i) {
      if (st[i].mathematics > 3 and st[i].phisics > 3 and st[i].informatics > 3){   cout << st[i].familia << ' ' << st[i].name << '\n';}
    }
    return 0;
}
