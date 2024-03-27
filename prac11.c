#include<stdio.h>

int main(){
    int n;
    for (int i = 1; i <= 5; i++)
    {
        if (i%2!=0)
        {
            n=1;
        }
        else{
            n=0;
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d",n);
            if (n==0)
            {
                n=1;
            }
            else
            n=0;
            
        }
        printf("\n");
        
        
    }
    
    return 0;
}