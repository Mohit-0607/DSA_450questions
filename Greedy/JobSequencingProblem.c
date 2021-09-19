#include<stdio.h>
#include<stdbool.h>
 
void printMaxProfit(int d[], int p[], int n)
{
    int i, j;
    int temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(p[i]<p[j]){
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("(%d,%d), ",d[i],p[i]);
    }
    bool done[n];
    for(i=0;i<n;i++){
        done[i]=false;
    }
    int profit=0;
    
    for(i=0;i<n;i++){
        int m;
        if(d[i]>n)
        {
            m=n-1;
        }
        else{
            m=d[i]-1;
        }
        for(j=m;j>=0;j--){
            if(done[j]==false)
            {
                profit+=p[i];
                done[j]=true;
                break;
            }
        }
    }
    printf("Max Profit : %d ",profit);
}
 
int main()
{
    int d[] =  {4, 1, 1, 1};
    int p[] =  {20, 10, 40, 30};
    int n = sizeof(d)/sizeof(d[0]);
    printMaxProfit(d, p, n);
    return 0;
}