#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c = 0;
    scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d\t", c);
    //     a=b;
    //     b=c;
    //     c = a + b;
    // }
    int i=1;
    // while (i<=n)
    // {
    //     printf("%d\n",c);
    //     a=b;
    //     b=c;
    //     c=a+b;
    //     i++;
    // }
    do
    {
        printf("%d\n",c);
        a=b;
        b=c;
        c=a+b;
        i++;
    } while (i<=n);
    
    


    return 0;
}