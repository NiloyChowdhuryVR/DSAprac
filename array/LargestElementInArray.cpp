// Function to check if the array is sorted
int largest(int arr[], int n) {
    int largest = -1;
    // Code Here
    for(int i = 0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
