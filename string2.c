#include<stdio.h>
#include<string.h>
void main(void)
{
    int i;
    char name[40];
    printf("enter the string\n");
    gets(name);
    printf("%d\n",strlen(name));
    printf("%d\n",sizeof(name));//not working because name is defined as 40 
    for (i = 0; name[i]!='\0';i++);
    printf("length is %d\n",i);
}