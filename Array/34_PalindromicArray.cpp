#include <iostream>
using namespace std;

bool ispalindromic(int arr[], int n){
    bool ans = 1;
    for(int i=0;i<n;i++){
        int temp = arr[i];
        int r=0;
        int num = 0;
        while(temp){
            r = temp%10;
            num = num*10+r;
            temp = temp/10;
        }
        if(num!=arr[i]){
            ans = 0;
            break;
        }
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
	bool ans = ispalindromic(arr,n);
	cout<<ans;
	return 0;
}
