#include <stdio.h>

int main()
{
    int n,rev=0,r;
    printf("enter the number\n");
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("after reversing and substracting 9\n%d\n",rev-9);
    
    return 0;
}