/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 1, 2, 0, 1, 0, 2, 0, 1, 0, 2, 1, 0, 2, 2, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int c0=0,c1=0,c2=0;
    for(int i=0;i<len;i++){
        if(arr[i]==0)
            c0++;
        else if(arr[i]==1)
            c1++;
        else
            c2++;
    }
    int a[len],k=0;
    for(int i=0;i<c0;i++)
        a[k++]=0;
    for(int i=0;i<c1;i++)
        a[k++]=1;
    for(int i=0;i<c2;i++)
        a[k++]=2;
    for(int i=0;i<len;i++)
        printf("%d ",a[i]);
    return 0;
}
