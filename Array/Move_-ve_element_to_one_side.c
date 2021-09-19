/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[] = {-8, -6, 6, 7, -9, 8, 1, -3, 5, 3, -4, 0, 2, -2, -1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int pivot = 0;
    int i = 0;
    int j = len-1;
    int temp;
    for(int x=0;x<len;x++){
        while(arr[i]<pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int x=0;x<len;x++)
        printf("%d ",arr[x]);
    return 0;
}
