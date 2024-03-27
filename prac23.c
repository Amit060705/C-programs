#include <stdio.h>

int main()
{
    int a[5], b = 0, n, s;
    printf("enter 5 numbers\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter a frequency number\n");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            b++;
        }
    }
    printf("frequency is %d\n", b);
    return 0;
}
