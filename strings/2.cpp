#include<bits/stdc++.h>

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);

    string s;
    cin>>s;

    int n = s.size(), flag = 0;

    for(int i=0;i<n/2;i++){
        if(s[i] != s[n-i-1]){
            cout<<"NO";
            flag = 1;
            break;
        }
    }

    if(flag == 0) cout<<"Yes";
    
    return 0;
}