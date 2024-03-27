#include <stdio.h>

int main()
{
    int sum = 0, n;
    printf("enter nth term\n");
    scanf("%d",&n);
    // for (int i = 1; i <= n; i++)
    // {
    //     sum = sum + (i * i);
    // }
    // printf("%d\n", sum);
    int i=1;
    // while (i<=n)
    // {
    //     sum+=i*i;
    //     i++;
    // }
    // printf("%d\n",sum);
    do
    {
        sum+=i*i;
        i++;
    } while (i<=n);
    printf("%d\n",sum);
    
    return 0;

}