#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter three numbers\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if (a<0 || b<0 || a<0)
    {
        printf("input is invalid\n");
    }
    else{
    if (a<b && a<c)
    {
        printf("%d is the minimum number\n",a);
    }
    else if (b<c && b<a)
    {
        printf("%d is the minimum number\n",b);
    }
    else
    {
        printf("%d is the minimum number\n",c);
    }
}   
    return 0;
}