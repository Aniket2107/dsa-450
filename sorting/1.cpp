#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int n, int x,int tog){
    int low = 0;
    int high = n-1;
    int ans = -1;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid] == x){
            ans = mid;
            if(tog == -1) high = mid+tog;
            else low = mid+tog;
        }else if(arr[mid] > x){
            high = mid-1;
        }else {
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    std::ios::sync_with_stdio(false);

    int T;cin>>T;
    while(T--){
        int n,x; cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int start = binarySearch(a,n,x,-1);
        int end = binarySearch(a,n,x,1);

        if(start == -1) cout<<"-1"<<endl;
        else cout<<start<<" "<<end<<endl;
    }
    
    return 0;
}