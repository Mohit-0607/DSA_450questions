#include <stdio.h>
  
int main(){  
    char str[50];  
    gets(str);
    int i, len;
    char temp;  
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    int n=len/2;
    for (i = 0; i <n; i++){  
        temp = str[i];  
        str[i] = str[len-1];  
        str[len-1] = temp;
        len--;
    }   
    printf ("%s", str);
    return 0;
}  
