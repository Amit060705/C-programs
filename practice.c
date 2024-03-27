#include <stdio.h>
int main()
{
    int n1,n2,n3,max;
    printf("enter three numbers\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    {
        max=(n1>n2)?((n1>n3)?n1:n3):(n2>n3)?n2:n3;
        printf("maximum of %d and %d and %d is %d\n",n1,n2,n3,max);
    }
    return 0;
}