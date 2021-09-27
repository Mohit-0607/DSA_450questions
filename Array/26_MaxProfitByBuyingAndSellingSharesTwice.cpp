#include <iostream>
#include <climits>
using namespace std;

int solve(int arr[],int n){
    int pro1=0,pro2=0,buy1=INT_MAX,buy2=INT_MAX;
    for(int i=0;i<n;i++){
        buy1 = min(buy1,arr[i]);
        pro1 = max(pro1,arr[i]-buy1);
        buy2 = min(buy2,arr[i]-pro1);
        pro2 = max(pro2,arr[i]-buy2);
    }
    return pro2;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = solve(arr,n);
    cout<<ans;
    return 0;
}
