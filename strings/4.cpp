#include<bits/stdc++.h>

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);

    string s1,s2;
    cin>>s1>>s2;

    string temp = s1+s1;
    if(temp.find(s2) != string::npos){
        cout<<"Yes";
    }else {
        cout<<"No";
    }
    
    return 0;
}