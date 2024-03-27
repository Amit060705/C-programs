#include <stdio.h>
int main()
{
    int n,r,new=0,new2=0;
    printf("enter a number\n");
    scanf("%d",&n);
    while (n>0)
    {
        r=n%10;
        if (r%2==0)
        {
            new=(new*10)+(n%10);
        }
        n=n/10;
    }
    n=new;
    while (n>0)
    {
        new2=(new2*10)+(n%10);
        n=n/10;
    }
    printf("new number is %d",new2);
    return 0;
}