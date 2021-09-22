#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n){
        // Your code here
        int maxR = arr[0];
        int step = arr[0];
        int jump = 1;
        if(arr[0]==0) 
            return -1;
        else if(n==1)   return 0;
        else{
            for(int i=1;i<n;i++){
                if(i==n-1) return jump;
                maxR = max(maxR,i+arr[i]);
                step--;
                if(step==0){
                    jump++;
                    if(i>=maxR) return -1;
                    step=maxR-i;
                }
            }
            return jump;
        }
    }
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int ans = minJumps(arr,n);
  cout<<ans;
  return 0;
}
