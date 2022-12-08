void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i=1; i<n; i++){
        int j= i-1;
        int x = arr[i];
        while(j>-1 && arr[j]>x){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}
