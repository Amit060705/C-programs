#include <stdio.h>
int main()
{
    int a,b;
    char opt;
    printf("enter two numbers then a operator\n");
    scanf("%d\n%d\n%c",&a,&b,&opt);
    switch (opt)
    {
    case '+':
        printf("%d", (a + b));
        break;
    case '-':
        printf("%d", (a - b));
        break;
    case '*':
        printf("%d", (a * b));
        break;
    case '/':
        printf("%d", (a / b));
        break;
    case '%':
        printf("%d", (a % b));
        break;

    default:
        printf("wrong operator\n");
        break;
    }
    return 0;
}