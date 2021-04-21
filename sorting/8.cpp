#include <iostream>
using namespace std;

int majorityElement(int a[], int size)
{
        
    int visited[1000000];
    for(int i=0;i<size;i++){
        visited[a[i]]++;
    }
    
    for(int i=0;i<size;i++){
        if(visited[a[i]] > (size/2) ){
            return a[i];
        }
    }
    
    return -1;
        
}

int main() {
	int arr[] = { 6 ,1 ,15 ,19, 9 ,13 ,12 ,6 ,7 ,2 ,10 ,4 ,1 ,14 ,11 ,14 ,14 ,13 };
	int s = 18;
	int ans = majorityElement(arr,s);
	cout<<ans;
	return 0;
}
