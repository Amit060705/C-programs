#include <stdio.h>

int main()
{
    int i,c,n,ll,ul;

    scanf("%d", &ll);
    scanf("%d", &ul);
    for (n=ll;n<=ul;n++)
    {   
        c=0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i  == 0)
        {
            c++;
        }
    }
        if (c==2)
        {
            printf("%5d\n",n);
        }
    }

    return 0;
}