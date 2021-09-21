#include <iostream>
using namespace std;
#define INT_MAX 1000000009

int solve(int arr[], int n){
        // Your code here
        int dp[n];
        for(int i=0;i<n;i++) dp[i]=INT_MAX;
        dp[0]=0;
        int max;
        if(arr[0]==0){
            return -1;
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=i+1;j<=i+arr[i];j++){
                    if(j<n){
                    max = dp[i]+1;
                    if(dp[j]>max)
                        dp[j]=max;
                    }
                }
            }
            if(dp[n-1]==INT_MAX)
                return -1;
            else
            return dp[n-1];
        }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
   
    int ans = solve(arr,n);
    
    cout<<ans;
	return 0;
}
