#include <iostream>
#include <climits>
using namespace std;

int solve(int arr[],int n){
    int dp[n];
    int pro=0,sell=0,buy=INT_MAX;
    for(int i=0;i<n;i++) dp[i]=0;
    for(int i=n-1;i>=0;i--){
        sell = max(sell,arr[i]);
        pro = max(pro,sell-arr[i]);
        dp[i] = pro;
    }
    pro = 0;
    for(int i=0;i<n;i++){
        buy = min(buy,arr[i]);
        pro = max(pro,arr[i]-buy+dp[i]);
        dp[i] = pro;
    }
    return dp[n-1];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = solve(arr,n);
    cout<<ans;
    return 0;
}
