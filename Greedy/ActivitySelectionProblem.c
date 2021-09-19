#include<stdio.h>
 
void printMaxActivities(int s[], int f[], int n)
{
    int i, j;
    int temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(f[i]>f[j]){
                temp = f[i];
                f[i] = f[j];
                f[j] = temp;
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
        for(i=0;i<n;i++){
            printf("(%d,%d), ",s[i],f[i]);
        }
 
    printf ("Following activities are selected : ");
    i = 0;
    printf("%d ", i);
    for (j = 1; j < n; j++)
    {
      if (s[j] >= f[i])
      {
          printf ("%d ", j);
          i = j;
      }
    }
}
 
int main()
{
    int s[] =  {0, 1, 3, 5, 5, 8};
    int f[] =  {6, 2, 4, 7, 9, 9};
    int n = sizeof(s)/sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}