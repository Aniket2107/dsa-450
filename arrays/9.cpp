#include<bits/stdc++.h>

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);

    int n,k,ans=0;
    int arr[5000];

    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<pair<int,int>> v;
    vector<int> visited(n,0);
    
    for(int i=0;i<n;i++){
        if((arr[i] - k) >= 0){
            v.push_back({ arr[i]-k , i});
        }
        v.push_back({arr[i]+k, i});
    }

    sort(v.begin(),v.end());
    int left = 0, right = 0, elem = 0;
    while(elem < n && right < v.size()){
        if(visited[v[right].second] == 0){
            elem++;
        }
        visited[v[right].second]++;
        right++;
    }
     ans = v[right - 1].first - v[left].first;
    while(right < v.size()){
        if(visited[v[left].second] == 1){
            elem--;
        }
        visited[v[left].second]--;
        left++;

        while(elem < n && right < v.size()){
            if(visited[v[right].second] == 0){
            elem++;
        }
        visited[v[right].second]++;
        right++;
        }

        if(elem == n){
            ans = min(ans, v[right -1].first - v[left].first);
        }else {
            break;
        }
    }

    cout<<ans;

    return 0;
}