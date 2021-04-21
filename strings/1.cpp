#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);

    string s;
    cin>>s;
    int n = s.size();

    for(int i=0;i<n/2;i++){
        swap(s[i], s[n-i-1]);
    }
    cout<<s;
    return 0;
}