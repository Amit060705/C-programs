#include <stdio.h>
void hcf(){
    int n,a,b,sum=0,max;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        n=a;
    }
    else 
        n=b;
    
    for (int i = 1; i <=n;i++)
    {
        if (a%i==0 && b%i==0)
        {
            max=i;
        } 
    }
    printf("hcf is %d\n",max);
}
int main(){
    hcf();
    return 0;
}
