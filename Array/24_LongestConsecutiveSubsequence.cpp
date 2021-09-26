#include <iostream>
#include <unordered_set>
using namespace std;

int solve(int arr[],int n){
    unordered_set<int> s;
    int ans=0;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)==s.end())  // To check whether arr[i]-1 is not present in the set 
        {
            int count = 1;
            while(s.find(arr[i]+count)!=s.end()){
                count++;
            }
            if(count>ans) ans=count;
        }
    }
    return ans;
}

int main() {
	// your code goes here
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
