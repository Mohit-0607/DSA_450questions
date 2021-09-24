#include <iostream>
#include <climits>
using namespace std;

int solve(int arr[], int n){
    int cp=INT_MAX;
    int pro = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<cp)
            cp=arr[i];
        else if(arr[i]-cp>pro)
            pro = arr[i] - cp;
    }
    return pro;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int max_pro = solve(arr,n);
	cout<<max_pro;
	return 0;
}
