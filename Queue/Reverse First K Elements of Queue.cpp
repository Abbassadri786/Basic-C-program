#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseK(queue<int> &q, int k){
    stack<int> st;
    int n= q.size();
    int count = 0;
    // If k is invalid input
    if(k <= 0 || k > n){
        return;
    }
    // Step-1 : Push first K elements to stack
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        st.push(temp);
        count++;
        
        if(count == k){
            break;
        }
    }
    // Step-2 : Pop elements from stack and push back to queue
    while(!st.empty()){
        int temp = st.top();
        st.pop();
        q.push(temp);
        
    }
    count = 0;
    // Step-3 : Move n-k element of queue from front to back 
    while(!q.empty() && n-k != 0){
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;
        // Remaining elements
        if(count == n-k){
            break;
        }
    }
}

int main() {
    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(1);
    q.push(4);
    q.push(5);
    
    reverseK(q,5);
    // Printing queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
