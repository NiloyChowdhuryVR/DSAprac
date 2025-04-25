int getSecondLargest(int *arr, int n) {
    // code here
    int largest = arr[0];
    int secLarg = -1;
    for(int i = 0;i<n;i++){
        if(arr[i]>largest){
            secLarg = largest;
            largest = arr[i];
        }
        if(arr[i]<largest && arr[i]>secLarg){
            secLarg = arr[i];
        }
    }
    return secLarg;
}
