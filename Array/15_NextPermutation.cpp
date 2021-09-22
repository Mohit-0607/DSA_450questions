// #include <bits/stdc++.h>
#include <iostream>
using namespace std;


void solve(int arr[], int n){
    int loc=-1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>arr[i-1]){
            loc = i;
            break;
        }
    }
    if(loc==-1){
        int j = n-1;
        for(int i=0;i<(n-1)/2;i++){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    else{
        int prev = loc;
        for(int i=loc+1;i<n;i++){
            if(arr[i]>arr[loc-1] && arr[i]<=arr[prev]){
                prev = i;
            }
        }
        int temp = arr[prev];
        arr[prev] = arr[loc-1];
        arr[loc-1] = temp;
        // reverse(arr,loc,n-1);
        int j = n-1;
        for(int i=loc;i<(loc+n-1)/2;i++){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	solve(arr,n);
	
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
