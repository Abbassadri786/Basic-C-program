// First negative in a K size window
// Sliding window technique
#include <iostream>
#include <queue>
using namespace std;

void slidingWindow(int arr[], int n, int k){
    queue<int> q;
    //First K size window ke liye
    for(int i=0; i<k; i++){
        if(arr[i] < 0){
            q.push(i);
        }
    }
    //Remaining elements k liye
    for(int i=k; i<=n; i++){
        if(q.empty()){
            cout<<"0"<<" ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }
        // Remove element which is out of window
        while((!q.empty()) && (i-q.front() >= k)){
            q.pop();
        }
        // Inserting current 
        if(arr[i] < 0){
            q.push(i);
        }
    }
}

int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = 8;
    int k = 3;
    slidingWindow(arr,n,k);

    return 0;
}
