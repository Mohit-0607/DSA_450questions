#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int kthmin,kthmax;
	int min,loc;
	cin>>kthmin>>kthmax;
	for(int i=0;i<n-1;i++){
	    min = arr[i];
	    for(int j=i;j<n;j++){
	        if(arr[i]>arr[j]){
	            int temp = arr[i];
	            arr[i] = arr[j];
	            arr[j] = temp;
	        }
	    }
	}
	cout<<arr[kthmin-1]<<" "<<arr[n-kthmax];
	return 0;
}
