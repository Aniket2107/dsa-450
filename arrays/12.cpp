#include<bits/stdc++.h>

using namespace std;

int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}

void merge(int* a,int* b, int n,int m){
    int i,j,gap = m+n;

    for(gap = nextGap(gap);gap > 0; gap = nextGap(gap)){

        for(i=0;i+gap<n;i++){
            if(a[i] > a[i+gap]){
                swap(a[i], a[i+gap]);
            }
        }

        for(j = gap > n ? gap - n : 0; i < n && j < m;i++, j++){
            if(a[i] > b[j]){
                swap(a[i], b[j]);
            }
        }

        if (j < m) {
            for (j = 0; j + gap < m; j++)
                if (b[j] > b[j + gap])
                    swap(b[j], b[j + gap]);
        }
    }

}

int main(){
    std::ios::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    int a[n],b[m];


    //Aproach 1: using extra space of n+m

    // vector<int> ans;

    // for(int i=0;i<n;i++) { 
    //     cin>>a[i]; 
    //     ans.push_back(a[i]);
    // }
    // for(int i=0;i<m;i++) { 
    //     cin>>b[i];
    //     ans.push_back(b[i]);
    // }

    // sort(ans.begin(),ans.end());

    // for(int i=0;i<n;i++){
    //     a[i] = ans[i];
    //     cout<<a[i];
    // }
    // cout<<endl;
    // for(int i=0;i<m;i++){
    //     b[i] = ans[n+i];
    //     cout<<b[i];
    // }


    //Aproach 2: using gap method:--

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    merge(a,b,n,m);

    printf("First Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
 
    printf("\nSecond Array: ");
    for (int i = 0; i < m; i++)
        printf("%d ", b[i]);
        

    //aproach 3: 
    // int i=n-1, j = 0;
    //     while(i>=0 and j<m){
    //         if(arr1[i]>arr2[j])
    //             swap(arr1[i],arr2[j]);
    //         i--,j++;
    //     }
    //     sort(arr1,arr1+n);
    //     sort(arr2,arr2+m);
    
    return 0;
}