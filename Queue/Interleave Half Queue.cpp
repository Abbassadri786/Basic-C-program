// Interleave the first half of the queue with second half
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void interleaveQueue(queue<int> &q){
    int n = q.size();
    int k =n/2;
    int count =0;
    queue<int> q2;
    
    if(q.empty()){
        return;
    }
    // Push first k elements to q2
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;
        
        if(count == k){
            break;
        }
    }
  // Start Interleave in 2 halves.
    while(!q.empty() && !q2.empty()){
        int first = q2.front();
        q2.pop();
        q.push(first);
        
        int second = q.front();
        q.pop();
        q.push(second);
    }
   // Check for Odd case & hence push the remaining element
    if(n&1){
        int rem = q.front();
        q.pop();
        q.push(rem);
    }
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    
    interleaveQueue(q);
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}
