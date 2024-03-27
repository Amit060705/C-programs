#include<stdio.h>
//#include<stdlib.h>
int main(){
    char str[50],i;
    gets(str);
    for (i = 0; str[i] !='\0'; i++);
    printf("length of string is %d\n",i);
    return 0;
}