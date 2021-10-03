#include <iostream>
#include <vector>
using namespace std;

int knapsack(int n, int val[], int wt[], int W){
    vector<vector<int>> dp(n+1,vector<int>(W+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(wt[i-1]<=j){
                dp[i][j] = max(dp[i-1][j], val[i-1]+dp[i-1][j-wt[i-1]]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][W];
}

int main() {
	int n,W;
	cin>>n>>W;
	int wt[n],val[n];
	for(int i=0;i<n;i++){
	    cin>>wt[i];
	}
	for(int i=0;i<n;i++){
	    cin>>val[i];
	}
	int ans = knapsack(n,val,wt,W);
	cout<<ans;
	return 0;
}
