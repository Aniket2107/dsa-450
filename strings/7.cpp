#include<bits/stdc++.h>

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);

    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;

        int start=0,end=1;
        int l,h;

        for(int i=1;i<str.length();i++){
            l = i-1;
            h = i;

            while(l >=0 && h<str.length() && str[l] == str[h]){
                if(h-l+1 > end){
                    start = l;
                    end = h-l+1;
                }
                l--;
                h++;
            }

            l = i-1;
            h = i+1;

            while(l >=0 && h<str.length() && str[l] == str[h]){
                if(h-l+1 > end){
                    start = l;
                    end = h-l+1;
                }
                l--;
                h++;
            }
        }

        int endPoint = start+end-1;
        for(int i=start;i<=endPoint;i++){
            cout<<str[i];
        }
        
    }
    
    return 0;
}
