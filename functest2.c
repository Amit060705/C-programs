#include<stdio.h>
void armstrong()
{
    int n, s = 0, d, c=0, a = 1;
    printf("enter a no.\n");
    scanf("%d", &c);
    for (int i = 1; i <= c;)
    {
        n = a;
        s=0;
        while (n > 0)
        {
            d = n % 10;
            s = s + (d * d * d);
            n = n / 10;
        }
        if (s == a)
        {
            printf("%d is a armstrong number\n", a);
            i++;
        }
        a++;
    }
}
int main()
{
    armstrong();
    return 0;
}