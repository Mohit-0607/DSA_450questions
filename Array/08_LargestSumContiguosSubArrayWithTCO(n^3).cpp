#include <iostream>
using namespace std;

int solve(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<j;k++){
                sum = sum+arr[k];
            }
            if(sum>max)
                max=sum;
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
