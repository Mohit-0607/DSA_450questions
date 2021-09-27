#include <iostream>
#include <algorithm>
using namespace std;

bool solve(int arr[],int n,int x){
    sort(arr,arr+n);
    int f=0;
    for(int i=0;i<n;i++){
        int l=i+1;
        int r=n-1;
        while(r>l){
            if((arr[i]+arr[l]+arr[r])==x){
                f=1;
                break;
            }
            else if((arr[i]+arr[l]+arr[r])>x) r--;
            else l++;
        }
        if(f==1) break;
    }
    if(f==1) return true;
    else return false;
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
    bool ans = solve(arr,n,x);
    cout<<ans;
    return 0;
}
