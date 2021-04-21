#include<bits/stdc++.h>

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);

    string str;
    cin>>str;

    unordered_map<char,int> count;

    for(int i=0;i<str.size();i++){
        count[str[i]]++;
    }

    for(auto val : count){
        if(val.second > 1){
            cout<<val.first<<" count: "<<val.second<<endl;
        }
    }
    
    return 0;
}