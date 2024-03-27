#include <stdio.h>
// fibonacci
int main()
{
    // int c = 0, x, y,a=0,b=1;
    // scanf("%d\n%d",&x,&y);
    // while (c <= y)
    // {
    //     if (c >= x)
    //     {
    //         printf("%d\n",c);
    //     }
    //     a = b;
    //     b = c;
    //     c = a + b;
    // }
    int a = 0, b = 1, c = 0, x, y;
    scanf("%d\n%d",&x,&y);
    do
    {
        if (c >= x)
        {
            printf("%d\n", c);
        }
        a = b;
        b = c;
        c = a + b;

    } while (c <= y);

    return 0;
}