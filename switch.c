#include <stdio.h>

int main()
{
    int a, b,c;
    printf("enter two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("enter a operator\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("%d", (a + b));
        break;
    case 2:
        printf("%d", (a - b));
        break;
    case 3:
        printf("%d", (a * b));
        break;
    case 4:
        printf("%d", (a / b));
        break;
    case 5:
        printf("%d", (a % b));
        break;
    default:
        printf("wrong operator\n");
        break;
    }
    return 0;
}