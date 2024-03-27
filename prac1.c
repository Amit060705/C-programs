#include <stdio.h>

int main()
{
    int i,s=0;
    for (int i = 1; i <=8; i++)
    {
        s=s+(2*i);
        printf("%d\n",s);
    }
    // int i = 1, sum = 0, n = 2;
    // while (i <= 8)
    // {
    //     sum = sum + n;
    //     n = n + 2;
    //     printf("%d\n", sum);
    //     i++;
    // }
    // int i=1,n=2,sum=0;
    // do
    // {
    //     sum+=n;
    //     n=n+2;
    //     i++;
    // } while (i<=8);
    // printf("%d\n",sum);

    

    return 0;
}