#include<bits/stdc++.h>

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);

    int n;
    cin>>n;
    int nums[n];

    for(int i=0;i<n;i++) cin>>nums[i];

    int slow = nums[0];
    int fast = nums[0];
        
    do{
        slow=nums[slow];
        fast=nums[nums[fast]];
    }while(slow!=fast);
        
        
    fast = nums[0];
    while(fast!=slow){
        slow=nums[slow];
        fast=nums[fast];
    }
        
    cout<<slow; //both fast and slow have same values:-- 
    //prinitng any value will do    

    
    return 0;
}