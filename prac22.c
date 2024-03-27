#include <stdio.h>

int main()
{
    int a[5], b, n, s;
    printf("enter 5 numbers\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }//13579
    printf("enter a number to be index\n");
    scanf("%d", &n);//3
    for (int i = 0; i < 5; i++)
    {
        b=i;
        if (a[i] == n)
        {
            s = b;
        }
    }
    printf("index no. is is %d\n", s+1);
    return 0;
}