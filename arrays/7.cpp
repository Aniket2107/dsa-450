#include<bits/stdc++.h>

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);

    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int temp = a[n-1];
    for(int i=n-1;i>=0;i--){
        a[i+1] = a[i];
    }
    a[0] = temp;

    for(int i=0;i<n;i++) cout<<a[i];
    return 0;
}