// Merge Sort
#include <iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    // naye temp array liye he
    int *left = new int(len1);
    int *right = new int(len2);
    
    int k=s;
    // left waale me value copy kari
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }
    // right waale me value copy kari
    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }
    
    int left_idx = 0;
    int right_idx = 0;
    int main_idx = s;
    // Compare kari dono subarrays mese values ko
    while(left_idx < len1 && right_idx < len2){
        if(left[left_idx] < right[right_idx]){
            arr[main_idx] = left[left_idx];
            main_idx++;
            left_idx++;
        }
        else{
            arr[main_idx] = right[right_idx];
            main_idx++;
            right_idx++;
        }
    }
    // remaining left waale array ki values daali
    while(left_idx<len1){
        arr[main_idx] = left[left_idx];
        main_idx++, left_idx++;
    }
    // remaining right waale array ki values daali
    while(right_idx<len2){
        arr[main_idx] = right[right_idx];
        main_idx++, right_idx++;
    }
    
}

void mergeSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    
    //left wala array sort karrke do
    mergeSort(arr, s, mid);
    //Righr wala array sort karrke do
    mergeSort(arr, mid+1, e);
    
    // dono arrays ko merge kardo
    merge(arr, s, e);
} 

int main() {
    int size;
    cin>>size;
    int arr[size];
    //Taking input of array
    for(int i=0; i<size; i++)cin>>arr[i];
    
    int s =0;
    int e= size-1;
    
    mergeSort(arr,s,e);
    //Printing of array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// Time Complexity = O(nlogn)
