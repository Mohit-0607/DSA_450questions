#include <iostream>
#include <unordered_map>
using namespace std;
// TC O(N)
int solve(int arr[], int n, int k){
    int count = 0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        int x = k- arr[i];
        if(m[x]==0)
            m[arr[i]]++;
        else{
            count+=m[x];
            m[arr[i]]++;
        }
    }
    return count;
}


// TC O(N^2)

//  int solve(int arr[],int n, int k){
//      int count = 0;
//      for(int i=0;i<n;i++){
//          for(int j=i+1;j<n;j++){
//              if(arr[i]+arr[j]==k)
//                 count++;
//          }
//      }
//      return count;
//  }

int main() {
	// your code goes here
	int n;
	cin>>n;
	int k;
	cin>>k;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	int pair_count = solve(arr,n,k);
	cout<<pair_count;
	return 0;
}
