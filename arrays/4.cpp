#include<iostream>
#include<vector>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);

    int n;cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++) cin>>a[i];

    int low=0;
    int high = n-1;
    int mid=0;

    while(mid < high){
        if(a[mid] == 0){
            int temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;
            
            low++;
            mid++;
        }
        if(a[mid] == 2){
            int temp = a[high];
            a[high] = a[mid];
            a[mid] = temp;
            high--;
        }
        if(a[mid] == 1){
            mid++;
        }
    }

    for(int i=0;i<n;i++) cout<<a[i];
    return 0;
}


