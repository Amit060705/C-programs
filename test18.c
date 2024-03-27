#include <stdio.h>

int main()
{
    // for (int i = -7; i <= 7; i=i+2)
    // {
    //     printf("%d\t", i);
    // }

    //    int i=-7;
    //    while (i<=7)
    //    {
    //     printf("%d\t",i);
    //     i=i+2;
    //    }
    int i=-7;
    do
    {
        printf("%d\t",i);
        i=i+2;
    } while (i<=7);

    return 0;
}