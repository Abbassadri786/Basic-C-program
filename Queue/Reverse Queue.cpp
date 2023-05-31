// Reverse Queue
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> st;
    
    while(!q.empty()){
        int element = q.front();
        st.push(element);
        q.pop();
    }
    while(!st.empty()){
        int element = st.top();
        q.push(element);
        st.pop();
    }
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    
    reverseQueue(q);
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}
