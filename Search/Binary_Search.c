
#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main() {
    // BINARY search
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<binary_search(arr, n, key)<<endl;
    
    

    return 0;
}
