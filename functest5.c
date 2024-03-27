#include <stdio.h>
void lcm(){
    int n,a,b,sum=0;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    for (int i = 1; i <=99999;i++)
    {
        if (i%a==0 && i%b==0)
        {
            printf("lcm is %d\n",i);
            break;
        } 
    }
}
int main(){
    lcm();
    return 0;
}
