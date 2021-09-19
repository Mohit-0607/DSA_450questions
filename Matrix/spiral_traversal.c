#include <stdio.h>

int main(void) {
	// your code goes here
	int m,n;
	scanf("%d%d",&m,&n);
	int arr[m][n];
	for(int i=0;i<m;i++){
	    for(int j=0;j<n;j++){
	        scanf("%d",&arr[i][j]);
	    }
	}
	int maxi=m-1,maxj=n-1,mini=0,minj=0;
	int i,j;
	while(maxi>=mini && maxj>=minj){
	    for(j=minj;j<=maxj;j++){
	        printf("%d ",arr[mini][j]);
	    }
	    mini+=1;
	    for(i=mini;i<=maxi;i++){
	        printf("%d ",arr[i][maxj]);
	    }
	    maxj-=1;
	    for(j=maxj;j>=minj;j--){
	        printf("%d ",arr[maxi][j]);
	    }
	    maxi-=1;
	    for(i=maxi;i>=mini;i--){
	        printf("%d ",arr[i][minj]);
	    }
	    minj+=1;
	}
	
	
	return 0;
}

