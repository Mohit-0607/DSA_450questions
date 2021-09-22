#include <iostream>
using namespace std;


int solve(int arr[], int n){
    int max = arr[0];
    int maxth = 0;
    for(int i=0;i<n;i++){
        maxth = maxth + arr[i];
        if(maxth>max){
            max = maxth;
        }
        if(maxth<0){
            maxth = 0;
        }
    }
    return max;
   
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++){
	    cin>>arr1[i];
	}
	int ans = solve(arr1,n);
	
	cout<<ans;
	return 0;
}
