#include<bits/stdc++.h>

using namespace std;


int main(){
    std::ios::sync_with_stdio(false);

    int n;cin>>n;
    int a[n];
    int visited[n];
    int repeated,missing;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(visited[a[i]] == -1){
            repeated = a[i];
        }else {
            visited[a[i]] = -1;
        }
    }

    for(int i=1;i<=n;i++){
        if(visited[i] != -1){
            missing = i;
        }
    }

    cout<<"repeated "<<repeated<<endl;
    cout<<"miss "<<missing<<endl;



    return 0;
}