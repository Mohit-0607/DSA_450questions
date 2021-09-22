#include <iostream>
using namespace std;

void sort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
void solve(int arr1[], int n, int arr2[], int m){
    int i=0;
    while(i!=n){
        if(arr1[i]>arr2[0]){
            swap(arr1[i],arr2[0]);
            i++;
            sort(arr2,m);
        }
        else{
            i++;
        }
    }
}

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++){
	    cin>>arr1[i];
	}
	for(int i=0;i<m;i++){
	    cin>>arr2[i];
	}
	solve(arr1,n,arr2,m);
	for(int i=0;i<n;i++){
	    cout<<arr1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<m;i++){
	    cout<<arr2[i]<<" ";
	}
	
	return 0;
}
