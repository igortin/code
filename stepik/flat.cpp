#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <iomanip>


using namespace std;
struct predmet {
      double cost;
      double v;
      double c; };

bool compare(predmet firstElem, predmet secondElem) {
  return firstElem.cost/firstElem.v > secondElem.cost/secondElem.v;
}
vector<predmet> get_stolen_predmets_to_bag(std::vector <predmet> flat, int& v_bag) {
    sort(flat.begin(), flat.end(),compare);
    vector<predmet> bag;
    double val = 0;
    int i = 0;
    while (val < v_bag) {
       if (flat[i].v + val > v_bag) {         
         predmet temp;
         temp.cost = flat[i].cost; temp.v = v_bag - val; temp.c=flat[i].cost/flat[i].v * temp.v;
         bag.push_back(temp);
         val += temp.v; i = i + 1;            
        }
        else if (flat[i].v + val < v_bag ) {  
            bag.push_back(flat[i]);
            val += flat[i].v; i = i + 1; }     
        else  if (flat[i].v + val == v_bag) {
          bag.push_back(flat[i]);
          val = v_bag;
        }
        if (i == flat.size()) break;
      } return bag; }

int main() {
  int predmet_count; int v_bag;
  std::cin >> predmet_count;
  std::cin >> v_bag;
  std::vector<predmet> flat;
  if (predmet_count == 0) return 0;
  for (int i = 0; i < predmet_count; i++) {
      predmet instance;
      std::cin >> instance.cost;
      std::cin >> instance.v;
      instance.c = instance.cost;
      flat.push_back(instance); }
  vector<predmet> p = get_stolen_predmets_to_bag(flat, v_bag);
  double price = 0;
  for (int i = 0; i < p.size(); i++) {          
      price += p[i].c;
    }
  std::cout << std::fixed << setprecision(3) << price << '\n';
  return 0;
}
