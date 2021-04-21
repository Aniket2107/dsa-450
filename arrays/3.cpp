#include<bits/stdc++.h>

using namespace std;

int partition(int arr[], int left,int right){
    int pivot = arr[right],i=left,x;

    for(x = arr[left];x<right;x++){
        if(arr[x] <= pivot){
            swap(arr[i],arr[x]);
            i++;
        }    
    }
    swap(arr[i],arr[right]);    
    return i;
}

int quickSelect(int arr[],int left,int right,int k){
    int p = partition(arr,left,right);

    if(p+1 == k){
        // cout<<"Largest: =>>"<<arr[right-p-1]<<endl;   //Prints the kth largest element  
        return arr[p-1];    
    }

    if(p > k-1){
        return quickSelect(arr, left, p-1,k);
    }
    return quickSelect(arr,p+1,right,k);
}

int main(){
    std::ios::sync_with_stdio(false);

    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    cout<<quickSelect(a,0,n-1,k)<<endl;

    return 0;
}