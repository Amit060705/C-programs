#include <stdio.h>

int main()
{
    int n,rev=0,r,a;
    printf("enter the number\n");
    scanf("%d",&n);
    a=n;
    while (n!=0)
    {
 //       r=n%10;
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("after reversing\n%d\n",rev);
    if (a==rev)
    {
        printf("%d is a palindrome number\n");
    }
    else
        printf("%d is not a palindrome number\n");    
    
    return 0;
}