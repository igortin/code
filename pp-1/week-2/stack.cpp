
#include <iostream>

using namespace std;



struct node {
	int val;
	node * next;
	node * prev;

	node(int x){
		val = x;
		next = NULL;
		prev = NULL;
	} 
};

struct m_stack {
	private:
		int cnt;
		node * tail;
	public:
		m_stack(){
			tail = NULL;
			cnt = 0;
		}
		string push(int x){
			node * el = new node(x);
			if (tail != NULL){
				tail -> next = el;
				el -> prev = tail;
			}
			tail = el; 
			cnt = cnt + 1;

			return "ok";
		}
		void pop(){
			if (cnt > 0){
			int x = tail -> val;
			tail = tail-> prev;
			cnt --;
			cout << x << '\n';
			}
			else {
				cout << "error"<< '\n';}
			}
				void back(){
			if (cnt > 0){
				int x = tail -> val;		
				cout << x << '\n';}
			else { cout << "error" << '\n';}
		} 
		int size(){
			return cnt;}
		string clear(){
			tail = NULL; cnt = 0; return "ok";
		}
		int exit(){
			cout << "bye" << '\n';
			return 1;
		}
};




int main(){
	string str;
	int n; 
	m_stack st;
	while(str != "exit"){
		cin >> str;
		if (str == "push"){ 
			cin >> n;
			cout << st.push(n) << '\n';
		}
		else if (str == "pop"){
			st.pop() ;
		} 
		else if (str == "back"){
			st.back() ;
		}
		else if (str == "size"){
			cout << st.size() << '\n';
		}
		else if (str == "clear"){
			cout << st.clear() << '\n';
		}}
	st.exit(); return 0;};


