#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    /* T.C is O(n^3)
    
    int ma = a[0];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int s=0;
            for(int k=i;k<j;k++){
                s = s+a[k];
            }
            if(s>ma){
                ma=s;
            }
        }
    }
    printf("%d",ma); */
    
    // T.C is O(n^2)
    
    int pre[n];
    pre[-1]=0;
    for(int i=0;i<n;i++){
        pre[i] = pre[i-1]+a[i];
    }
    int ma=a[0];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int s = pre[j] - pre[i-1];
            if(s>ma){
                ma=s;
            }
        }
    }
    printf("%d",ma);
    return 0;
}