#include <iostream>
#include <vector>

using namespace std;

vector<int> FirstAndLastOccurence(vector<int> arr,int n, int x){
    int start=0,end=n-1,res1=-1,res2=-1;
    int mid=0;
    vector<int> ans;
    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid]==x){
            res1=mid;
            end = mid-1;
        }
        else if(arr[mid]>x){
            end=mid-1;
        }
        else if(arr[mid]<x){
            start = mid+1;
        }
    }
    ans.push_back(res1);
    start=0;end=n-1;mid=0;
    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid]==x){
            res2=mid;
            start=mid+1;
        }
        else if(arr[mid]>x){
            end=mid-1;
        }
        else if(arr[mid]<x){
            start = mid+1;
        }
    }
    ans.push_back(res2);
    return ans;
    
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> vec;
	for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    vec.push_back(x);
	}
	int key;
	cin>>key;
	vector<int> ans = FirstAndLastOccurence(vec,n,key);
	for(auto i:ans) cout<<i<<" ";
	return 0;
}
