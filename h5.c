#include <stdio.h>

int main()
{
    float a, b, x, s = 0,n;
    scanf("%f\n%f\n%f", &a, &x,&n);
    for (int i = 1; i <= n; i++)
    {
        b = (i * i);
        if (i % 2 == 0)
        {
            s = s - ((a + b) / x);
        }
        else
        {
            s = s + ((a + b) / x);
        }
    }
    printf("%f\n",s);

    return 0;
}