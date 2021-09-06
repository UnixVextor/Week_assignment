#include <stdio.h>
int main(){
    char str[50],*p;
    p = str;
    scanf("%s",str);
    
    while(*p != '\0'){
        if(*p != *(p-1)){
            printf("%c",*p);
        }
        p++;
    }

    return 0;
}