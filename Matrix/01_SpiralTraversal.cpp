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
	
	int top=0,left=0,right=col-1,bottom=row-1;
    while(bottom>=top and right>=left){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top+=1;
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right-=1;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<arr[bottom][i]<<" ";
            }
            bottom-=1;
        }
        if(right>=left){
            for(int i=bottom;i>=top;i--){
                cout<<arr[i][left]<<" ";
            }
            left+=1;
        }
    }
	return 0;
}
