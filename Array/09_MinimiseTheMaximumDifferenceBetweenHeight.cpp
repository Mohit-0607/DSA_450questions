#include <iostream>
using namespace std;

void sort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int solve(int arr[],int n,int k){
   sort(arr,n);
   for(int i=0;i<n;i++){
       if(arr[i]<=k)    
            arr[i]+=k;
        else
            arr[i]-=k;
   }
   sort(arr,n);
   return arr[n-1]-arr[0];
}
int main() {
    int k,n;
    cin>>k>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
   
    int ans = solve(arr,n,k);
    
    cout<<ans;
	return 0;
}
