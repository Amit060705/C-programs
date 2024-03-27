#include <stdio.h>

int main()
{
    int i, a, n;
    i = 1;
    a = 1;
    printf("enter nth term\n");
    scanf("%d", &n);
    do
    {
        printf("%d\n",a);
        a=a+2;
        i++;
    } while (i<=n);
    
    return 0;
}