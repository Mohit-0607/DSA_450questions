#include <iostream>
#include <climits>
using namespace std;

int solve(int arr[],int n,int x){
    int l=0,r=0;
    int count=INT_MAX;
    int sum=0;
    while(l<=r and r<n){
        while(sum<=x and r<n)
            sum+=arr[r++];
        while(sum>x and l<r)
        {
            count = min(count,r-l);
            sum-=arr[l];
            l++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int ans = solve(arr,n,x);
    cout<<ans;
    return 0;
}
