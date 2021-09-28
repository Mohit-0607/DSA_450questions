#include <iostream>
using namespace std;

void solve(int arr[],int n, int a,int b){
    int l=0;
    int r=n-1;
    for(int i=0;i<=r;i++){
        if(arr[i]>b){
            swap(arr[i],arr[r]);
            r--;
            i--;
        }
        if(arr[i]<a){
            swap(arr[i],arr[l]);
            l++;
        }
    }
}


int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int a,b;
	cin>>a>>b;
	int l=0;
    int r=n-1;
    for(int i=0;i<=r;i++){
        if(arr[i]>b){
            swap(arr[i],arr[r]);
            r--;
            i--;
        }
        if(arr[i]<a){
            swap(arr[i],arr[l]);
            l++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
	
	return 0;
}
