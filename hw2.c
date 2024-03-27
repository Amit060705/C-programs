#include <stdio.h>

int main()
{
    // int c = 0,n1,n2,a = 0, b = 1,term=1;
    // scanf("%d\n%d",&n1,&n2);
    // while (term <= n2)
    // {
    //     if (term>=n1)
    //     {
    //         printf("%d\n",c);
    //     }
    //     a = b;
    //     b = c;
    //     c = a + b;
    //     term++;
    // }
    int a=0,b=1,c=0,term=1,n1,n2;
    scanf("%d\n%d",&n1,&n2);
    do
    {
        if (term>=n1)
        {
            printf("%d\n",c);
        }
        a=b;
        b=c;
        c=a+b;
        term++;
        
    } while (term<=n2);
    
    return 0;
}