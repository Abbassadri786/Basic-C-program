#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    int temp;
    for(int i=0; i< n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                
            }
        }
    }
}
