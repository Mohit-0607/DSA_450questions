#include <iostream>
#include <unordered_map>
using namespace std;

bool solve(int arr[], int n){
    int sum = 0;
    int f = 0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        if(arr[i]==0 or sum==0 or m[sum]==1){
            f = 1;
            break;
        }
        else{
            m[sum]++;
        }
    }
    if(f==1) return true;
    else return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bool ans = solve(arr,n);
    if(ans) cout<<"YES";
    else cout<<"NO";
    return 0;
}
