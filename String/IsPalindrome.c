#include <stdio.h>
  
int main(){  
    char str[50];  
    gets(str);
    int i, len,flag=0;
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    int n=len/2;
    for (i = 0; i<n; i++){  
        if(str[i]==str[len-1]){
            flag = 0;
        }
        else{
            flag = 1;
            break;
        }
        len--;
    }   
    if(flag==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}  
