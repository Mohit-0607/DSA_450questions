#include <iostream>
using namespace std;

long long int TrappingRainwater(int arr[], int n){
    int l[n],r[n];
    l[0] = arr[0];
    r[n-1] = arr[n-1];
    long long int ans=0;
    for(int i=1;i<n;i++){
        l[i] = max(l[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        r[i] = max(r[i+1],arr[i]);
    }
    for(int i=1;i<n-1;i++){
        ans = ans  + (min(l[i],r[i])-arr[i]);
    }
    return ans;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	long long int ans = TrappingRainwater(arr,n);
	cout<<ans;
	return 0;
}
