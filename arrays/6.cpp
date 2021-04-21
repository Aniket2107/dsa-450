#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    int a[n],b[m];
	    unordered_set<int> intSet;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        intSet.insert(a[i]);
	    }     
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	        intSet.insert(b[i]);
	    }
	    
	    cout<<intSet.size()<<endl;
	}
	return 0;
}