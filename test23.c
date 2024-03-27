#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    // for (int i = 1; i <= 10; i++)
    // {
    //     if (i % 2 == 1)
    //     {
    //         printf("%d\n", i);
    //     }
    // }
    int i = 1;
    // while (i <= 10)
    // {
    //     if (i % 2 == 1)
    //     {
    //         printf("%d\n", i);
    //     }
    //     i++;
    // }
    do
    {
        if (i%2==1)
        {
           printf("%d\n",i);
        }
        i++;
        
    } while (i<=n);
    

    return 0;
}