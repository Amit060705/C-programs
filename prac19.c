#include <stdio.h>

int main()
{
    int a, b, c, d, e, max, secondMax;
    printf("enter the values\n");
    scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);
    if (a > b)
    {
        max = a;
        secondMax = b;
    }
    else
    {
        secondMax = a;
        max = b;
    }
    if (c > max)
    {
        secondMax = max;
        max = c;
    }
    else if (c > secondMax)
    {
        secondMax = c;
    }
    if (d > max)
    {
        secondMax = max;
        max = d;
    }
    else if (d > secondMax)
    {
        secondMax = d;
    }
    if (e > max)
    {
        secondMax = max;
        max = e;
    }
    else if (e > secondMax)
    {
        secondMax = e;
    }
    printf("%d\n", max);
    printf("%d\n", secondMax);
    return 0;
}