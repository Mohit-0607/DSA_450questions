#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solve(vector<int> arr){
    int XOR=arr[0];
    for(int i=1;i<arr.size();i++){
        XOR=XOR^arr[i];
    }
    int rightsetbit = XOR& ~(XOR-1);
    int first=0,second=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]&rightsetbit){
            first = first^arr[i];
        }
        else{
            second = second^arr[i];
        }
    }
    vector<int> ans;
    ans.push_back(first);
    ans.push_back(second);
    sort(ans.begin(),ans.end());
    return ans;
}

using namespace std;

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
	vector<int> ans = solve(vec);
	for(auto i:ans) cout<<i<<" ";
	return 0;
}
