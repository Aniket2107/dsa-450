#include<bits/stdc++.h>

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);

    int n;cin>>n;
    int a[n];

    for(int i=0;i<n;i++) cin>>a[i];

    int low = 0;
    int high = n-1;

    while(low <= high){
        if(a[low] < 0 && a[high] < 0){
            low += 1;
        }else if(a[low] > 0 && a[high] < 0){
            int temp = a[high];
            a[high] = a[low];
            a[low] = temp;
            low++;
            high--;
        }else if(a[low] > 0 && a[high] > 0){
            high--;
        }else {
            low++;
            high--;
        }
    }    

    for(int i=0;i<n;i++) cout<<a[i];
    return 0;
}