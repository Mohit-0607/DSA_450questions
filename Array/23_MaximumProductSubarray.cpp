#include <iostream>
using namespace std;

long long int solve(int arr[],int n){
    long long int ans = 1;
    long long int maxth = 1;
    long long int ne = 1;
    int count = 0;
    for(int i=0;i<n;i++){
        maxth = maxth*arr[i];
        if(maxth>ans) ans=maxth;
        if(maxth==0) maxth=1;
        if(maxth<0){
            count++;
            if(count==2){
                count = 0;
                ne = 1;
            }
            else{
                ne = arr[i]*(-1);
            }
            maxth = maxth*(-1);
        }
    }
    return ans/ne;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    long long int ans = solve(arr,n);
    cout<<ans;
    return 0;
}
