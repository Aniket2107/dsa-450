#include<iostream>

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);

    int n;cin>>n;
    int a[n];

    for(int i=0;i<n;i++)cin>>a[i];

    int low = 0;
    int high = n-1;

    while(high > low){
        int temp = a[high];
        a[high] = a[low];
        a[low] = temp;

        high--;
        low++;
    }

    for(int i=0;i<n;i++)cout<<a[i];

    return 0;
}