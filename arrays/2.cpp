#include<iostream>

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);

    int n; cin>>n;
    int a[1000];

    int max=0,min=1000;

    for(int i=0;i<n;i++){
        cin>>a[i];

        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }

    cout<<max<<" "<<min<<endl;
    
    return 0;
}