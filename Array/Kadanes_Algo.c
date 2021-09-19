#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   
    
    // T.C is O(n)
    
    int ma = a[0];
    int ma_th = 0;
    for(int i=0;i<n;i++){
        ma_th = ma_th+a[i];
        if(ma_th>ma){
            ma=ma_th;
        }
        if(ma_th<0){
            ma_th = 0;
        }
    }
    printf("%d",ma);
    return 0;
}