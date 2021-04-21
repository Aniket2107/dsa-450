#include<bits/stdc++.h>

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);

    string s1,s2,res;
    cin>>s1>>s2>>res;

    int l1 = s1.length();
    int l2 = s2.length();
    int l3 = res.length();
    if(l1+l2 != l3) cout<<"NO";
    else {
        int flag = 0;
        int i=0,j=0,k=0;

        while(k<l3){
            if(i<l1 and res[k] == s1[i]){
                i++;
            }else if(j < l2 and res[k] == s2[j]){
                j++;
            }else {
                flag = 1;
                break;
            }
            k++;
        }
        
        if(flag == 1 or i<l1 or j<l2) cout<<"No";
        else cout<<"Yes";
    }
    return 0;
}