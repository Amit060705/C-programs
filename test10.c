#include <stdio.h>

int main()
{
    int i, a, n;
    a = 1;
    printf("enter nth term\n");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        printf("%d\n",a);
        a=a+2;
    }
    return 0;
}