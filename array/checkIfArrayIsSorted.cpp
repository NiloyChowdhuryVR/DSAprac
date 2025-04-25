// Function to check if the array is sorted
bool arraySortedOrNot(int arr[], int n) {
    // Code Here
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}