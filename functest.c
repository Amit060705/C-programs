#include<stdio.h>
void prime()
{
    int n=1,c;
    printf("how much numbers you want to print\n");
    scanf("%d",&c);
    for (int i = 1; i <= c;)
    {
        int count=0;
        for (int j = 1; j <= n; j++)
        {
            if(n % j == 0)
            {
                count++;
            }
        }
        if (count==2)
        {
            printf("%d\n",n);
            i++;
        }
        n++;
    }
}
int main()
{
    prime();
    return 0;
}