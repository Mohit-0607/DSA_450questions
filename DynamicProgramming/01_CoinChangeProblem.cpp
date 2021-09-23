#include <iostream>
using namespace std;

int dp[1000][1000];
int solve(int arr[], int n, int m){
    if(m==0) return 1;
    if(n==-1 and m>0) return 0;
    if(m<0) return 0;
    if(dp[n][m]!=0) return dp[n][m];
    return dp[n][m]=solve(arr,n,m-arr[n])+solve(arr,n-1,m);
    
}
int count(int arr[],int n,int m){
    dp[n][m+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            dp[n][m]=-1;
        }
    }
    return solve(arr,n-1,m);
}
int main() {
	int m,n;
	cin>>m>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int ans = count(arr,n,m);
	cout<<ans;
	return 0;
}
