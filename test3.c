#include <stdio.h>

int main()
{
    int a, b;
    printf("enter value of a and b\n");
    scanf("%d\n%d", &a, &b);
    printf("a==b is %d\n", a == b);
    printf("a!=b is %d\n", a != b);
    printf("a>b is %d\n", a > b);
    printf("a<b is %d\n", a < b);
    printf("a>=b is %d\n", a >= b);
    printf("a<=b is %d\n", a <= b);
    return 0;
}