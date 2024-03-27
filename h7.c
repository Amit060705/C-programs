#include <stdio.h>

int main()
{
    int a = 0, b=0,n=15;
    for (int i = 2; i<=(n+1); i++)
    {       
        printf("%d\n",a); //a=0,3,8
        b=((2*i)-1);      //b=3,5,7
        a=a+b;            //a=3,8
    }

    return 0;
}