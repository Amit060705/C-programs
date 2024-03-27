#include <stdio.h>
void factor(){
    int n,sum=0;
    printf("enter a no.\n");
    scanf("%d",&n);
    for (int i = 1; i <= n;i++)
    {
        if (n%i==0)
        {
            printf("%d ",i);
        } 
    }
    
}
int main(){
    factor();
    return 0;
}
