#include <stdio.h>

int main()
{
    int n,result=1;
    printf("enter a number\n");
    scanf("%d",&n);
    int i,a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            result = result * a[i];
        }
    }
    printf("%d", result);

    return 0;
}