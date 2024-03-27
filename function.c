#include <stdio.h>
void ch_odd_even()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    if (n % 2 == 1)
    {
        printf("%d is a odd number\n", n);
    }
    else
        printf("%d is a even number\n", n);
}
int main()
{
    ch_odd_even();
    return 0;
}