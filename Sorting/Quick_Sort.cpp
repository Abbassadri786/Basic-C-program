#include <bits/stdc++.h> 
int partition(int arr[],int l, int h){
    int pivot = arr[l];
    int i=l, j=h;
    
    do{
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);
    }
    if(i<j)swap(&arr[i],&arr[j]);
    while(i<j)swap(&arr[l],&arr[j]);
    return j;
}
vector<int> quickSort(vector<int> arr,int l, int h)
{
    // Write your code here.
    while(l<h){
        int pi = partition(arr,n);
        quickSort(arr,l,pi);
        quickSort(arr,pi+1,h);
    }
}
