#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <set>


using namespace std;
struct Segment {
      int first;
      int second;
      };

bool compare(Segment firstElem, Segment secondElem) {
  return firstElem.second < secondElem.second;
}
std::vector <int> get_covering_set(std::vector <Segment> segments) {
    sort(segments.begin(),segments.end(),compare);

    std::vector <int> p;
    for (int i = 0; i < segments.size(); i++) { 
      p.push_back(segments[i].second);
    }
    int i = 0; int j = 1;
    while (i < p.size() -1 && j < segments.size()) {  
          if (p[i] >= segments[j].first){ 
             p.erase(p.begin()+j); 
             segments.erase(segments.begin()+j); 
             } 
          else
               j = j + 1; 


          if (j > segments.size()-1) {
                  i = i + 1; j = i + 1;} -------

     }
     return p;}
int main() {
  int segments_count;
  std::cin >> segments_count;
  std::vector<Segment> segments;
  for (int i = 0; i < segments_count; i++) {
      Segment instance;
      std::cin >> instance.first;
      std::cin >> instance.second;
      segments.push_back(instance);
  }
  std::vector<int> points = get_covering_set(segments);
  std::cout << points.size() << '\n';
  for (int i = 0; i < points.size(); i++) { 
      std::cout << points[i] << ' ';}
  return 0; }
