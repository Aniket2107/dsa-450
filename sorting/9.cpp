#include<bits/stdc++.h>

using namespace std;

int findTheNumber(int arr[], int n, int x, int k){
    int i = 0;
    while(i<n){
        if(arr[i] == x){
            return i;
        }

        i = i + max(1, abs((arr[i]-x)/k));
    }

    return -1;
}

int main(){
    std::ios::sync_with_stdio(false);

    int arr[] = {20, 40, 50, 70, 70, 60};
    int n = 6;

    //input k and x => x is the number whos index is to be found
    // k be the max diff between 2 adjacent elements
    int x = 60, k = 20;

    //Naive approach is to simply traverse the array and find the number:--

    //Optimized approach:--
    int ans = findTheNumber(arr,n,x,k);
    cout<<"The first occurence of given x is =>"<<ans;


    return 0;
}