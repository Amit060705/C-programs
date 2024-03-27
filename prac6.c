#include<stdio.h>

int main(){

    for (int i = 1; i <= 5; i++)
    {
        int count=0;
        for (int j = 2*i-1; count <5 ; j=(j+2)%10)
        {
            printf("%d",j);
            count++;
        }
        printf("\n");
        
    }
    
    return 0;
}