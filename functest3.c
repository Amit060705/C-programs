#include <stdio.h>
void perfect(){
    int n,sum=0;
    printf("enter a no.\n");
    scanf("%d",&n);
    for (int i = 1; i < n;i++)
    {
        if (n%i==0)
        {
            sum+=i;
        } 
    }
    
    if (sum==n)
    {
        printf("this is a perfect number\n");
    }
}
int main(){
    perfect();
    return 0;
}
