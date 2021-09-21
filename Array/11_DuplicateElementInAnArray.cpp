#include <iostream>
using namespace std;
#define INT_MAX 1000000009

void sort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int solve(int arr[], int n){
        sort(arr,n);
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                return arr[i];
                break;
            }
        }
        return -1;
    }
    
int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
   
    int ans = solve(arr,n);
    
    cout<<ans<<endl;
    }
	return 0;
}
