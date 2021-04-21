bool findPair(int arr[], int size, int n){
    //code 20 50 70 80 90
    sort(arr,arr+size);
    int i = 0;
    int j = 1;
    while(i<size && j<size){
        if(i != j && arr[j]-arr[i] == n ){
            return true;
        }
        if(arr[j] - arr[i] < n){
            j++;
        }else {
            i++;
        }
        
    }
    return false;
}