#include<stdio.h>

int main(){
    int n;
    float a=2.0,b=4.0,s=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (i%2==1)
        {
            s=s+(a/b);
        }
        else{
            s=s-(a/b);
        }    
        a=a+2;
        b=b+2;
        
    }
    printf("%f",s);
    return 0;
}