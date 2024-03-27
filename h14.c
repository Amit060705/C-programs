#include <stdio.h>

int main()
{
    int s = 0;
    for (int i = 10; i <= 20; i++)
    {
        if (i % 2 == 1)
        {
            s = s + i;
        }
    }
    printf("%d ", s);
    return 0;
}