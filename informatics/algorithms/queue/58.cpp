    #include <iostream>

    using namespace std;



    struct node{
                                                            // properties
        int val;
        node * next;
                                                            // constructor
        node(int x) {
            val = x;
            next = NULL;
        }
    };

    struct mqueue{
                                                            // constructor
        mqueue(){
            head = NULL;
            tail = NULL;
            cnt = 0;
        }
                                                            // method
        string push(int x){
                                                            // initial node instance
            node * item = new node(x);

            if (head == NULL){
                head = item;
            }
            if (tail != NULL){
                tail -> next = item;                        // node.next set pointer 0x777c20
                                                            // cout << "tail -> next: " << tail -> next << "\n";
            }
            tail = item;        // change tail pointer to 0x777c20
            cnt = cnt + 1;
            return "ok";
        }




        int pop(){
            if (head != NULL) {
                int x = head -> val;
                // cout << "pointer to head: " << head << '\n';
                head = head -> next;
                // cout << "change head to pointer: " << head << '\n';
                cnt --;
                cout << x;
                }
            else { cout << "error";}
            }

        void front(){
            if (head != NULL) {
                int x = head -> val;
                cout << x;
            }
            else {
                cout << "error";
            }
        }


        int size(){
            return cnt;
        }
        string clear(){
            head = NULL;
            tail = NULL;
            cnt = 0;
            return "ok";
        }
        int exit(){
            cout << "bye" << '\n';
            return 1;
        }
        // properties
        private:            // security properties
            node * head;
            node * tail;
            int cnt;
        };
    int main(){
        mqueue q;string command; int c;
        while (command != "exit") { cin >> command;
            if (command == "front") { q.front(); cout << '\n'; }
            else if (command == "pop") { q.pop(); cout << '\n'; }
            else if (command == "clear"){cout << q.clear() << '\n'; }
            else if (command == "push"){cin >> c; cout << q.push(c) << '\n';}
            else if (command == "size") {cout << q.size() << '\n';}
        }
        q.exit();
        return 0;
      }
