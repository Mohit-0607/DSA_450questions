#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int row,col;
	cin>>row>>col;
	int arr[row][col];
	for(int i=0;i<row;i++){
	    for(int j=0;j<col;j++){
	        cin>>arr[i][j];
	    }
	}
	int target;
	cin>>target;
	int f=0;
	for(int i=0;i<row;i++){
	    for(int j=0;j<col;j++){
	        if(arr[i][j]==target){
	            f=1;
	            break;
	        }
	    }
	    if(f==1) break;
	}
	if(f==1) cout<<"Element found";
	else cout<<"Not Found";
	return 0;
}
