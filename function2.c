#include <stdio.h>
void line()
{
    printf("_________\n");
}
void div_2()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d is divisible by 2\n", n);
    }
}
void div_5(int n)
{
    if (n % 5 == 0)
    {
        printf("%d is divisible by 5\n", n);
    }
}
int mul_7()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    if (n % 7 == 0)
        return 1;
}
int mul_11(int n)
{
    if (n % 11 == 0)
        return 1;
}
int main()
{
    int a=10,b=22;
    div_2();
    line();
    div_5(a);
    if (mul_7()==1)
    {
        printf("the number is multiple of 7\n");
    }
    if (mul_11(b)==1)
    {
        printf("%d is multiple of 11\n",b);
    }
    
    
    return 0;
}