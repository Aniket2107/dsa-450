#include<bits/stdc++.h>

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);

    int n = 8;
    int a[n] = {-2, -3, 4, -1, -2, 1, 5,-3 };

    int maximum = a[0];

    //Brute force n^2
    /*for(int i=0;i<n;i++){
        int som = 0;
        for(int j=i;j<n;j++){
            som = som + a[j];
            if(maximum < som){
               maximum = som;
            }
        }
        
    }*/

    //Linear o(n)
    int som = 0;
    for(auto num : a){
        som += num;
        if(som < 0) som = 0;
        if(som > maximum) maximum = som;
    }
    
    cout<<"max:-"<<maximum<<endl;
    return 0;
}