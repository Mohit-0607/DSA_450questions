#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 8, 9, 7, 6, -2, 8, 6};
    int n = 9;
    int temp = 0;
    int lrg=8;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int max,count=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=arr[i-1]){
            count++;
        }
        max = arr[i];
        if(count==lrg){
            break;
        }
    }
    printf("\n%dth max element is : %d",lrg,max);
    return 0;
}
