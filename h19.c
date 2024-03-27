#include<stdio.h>

int main(){
    int i=1,n;
    scanf("%d",&n);
    // while (i<=n)
    // {
    //     int j=1;
    //     while (j<=i)
    //     {
    //         printf("*");
    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    do
    {
        int j=1;
        do
        {
            printf("*");
            j++;
        } while (j<=i);
        printf("\n");
        i++;
        
    } while (i<=n);
    
        
    
    
    return 0;
}