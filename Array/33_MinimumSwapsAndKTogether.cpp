#include <iostream>
#include <climits>
using namespace std;

int solve(int arr[], int n,int k){
    int countk=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k) countk++;
    }
    int greaterk=0;
    for(int i=0;i<countk;i++){
        if(arr[i]>k) greaterk++;
    }
    int res = INT_MAX;
    res = min(res,greaterk);
    for(int i=countk;i<n;i++){
        if(arr[i-countk]>k) greaterk--;
        if(arr[i]>k) greaterk++;
        res = min(res,greaterk);
    }
    return res;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int k;
	cin>>k;
	int ans = solve(arr,n,k);
	cout<<ans;
	return 0;
}
