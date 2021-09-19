#include <stdio.h>
  
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num;
    scanf("%d",&num);
    int first=-1,last=-1,count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            last=i+1;
            count++;
        }
    }
    first = last-count+1;
    printf("%d %d",first,last);
    return 0;
}  
