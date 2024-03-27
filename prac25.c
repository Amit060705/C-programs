#include<stdio.h>

int main(){
    int n,sh,h;h=sh=-99999;
    printf("enter the numbers\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&n);
        if (n>h)
        {
            sh=h;
            h=n;
        }
        else if (n<h && n>sh)
        {
            sh=n;
        }
        
        
    }
    printf("second highest is %d",sh);
    
    return 0;
}