#include <stdio.h>

int main()
{
    int a, b, c, d, e,f,g,h,i,j,max = 0;
    printf("enter the values\n");
    scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e,&f,&g,&h,&i,&j);
    if (a > max)
    {
        max = a;
    }
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }
    if (e>max)
    {
        max = e;
    }
    if (f>max)
    {
        max = f;
    }
    if (g>max)
    {
        max = g;
    }
    if (h>max)
    {
        max = h;
    }
    if (i>max)
    {
        max = i;
    }
    if (j>max)
    {
        max = j;
    }
    printf("%d", max);

    return 0;
}