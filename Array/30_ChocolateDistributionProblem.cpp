#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int solve(int arr[],int n,int m){
    sort(arr,arr+n);
    int min = INT_MAX;
    for(int i=0;i+m-1<n;i++){
        int dif = arr[i+m-1]-arr[i];
        if(dif<min) min=dif;
    }
    return min;
    
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = solve(arr,n,m);
    cout<<ans;
    return 0;
}
