#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    int minIndex,temp;
    for(int i=0; i<n-1; i++){
        minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[minIndex] > arr[j])
                minIndex = j;
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
