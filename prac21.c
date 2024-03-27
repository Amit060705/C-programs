#include <stdio.h>

int main()
{
    int n,i, d, s = 0,x,a=0;
    printf("enter a number\n");
    scanf("%d", &n);
    printf("enter a frequency number\n");
    scanf("%d",&x);
    for(i=n;i>0;i=i/10)
    {
        d = i % 10;
        if (d>0)
        {
            if (d==x)
            {
                a++;
            }
            
        }
    }
    printf("frequency is %d\n",a);
    return 0;
}