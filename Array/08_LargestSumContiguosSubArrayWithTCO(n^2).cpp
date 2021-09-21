#include <iostream>
using namespace std;

int solve(int arr[],int n){
    int pre[n];
    pre[-1]=0;
    for(int i=0;i<n;i++){
        pre[i] = pre[i-1]+arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = pre[j] - pre[i-1];
            if(sum>max){
                max=sum;
            }
        }
    }
    return max;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
   
    int ans = solve(arr,n);
    
    cout<<ans;
	return 0;
}
