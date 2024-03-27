#include<stdio.h>

int main(){
    int i=1;
    // while(i<=3)
    // {
    //     int j=1;
    //     while (j<=4)
    //     {
    //         printf("@");
    //         j++;
    //     }
    //     i++;
    //     printf("\n");       
    // }
    do
    {
        int j=1;
        do
        {
            printf("@");
            j++;
        } while (j<=4);
        i++;
        printf("\n");
        
    } while (i<=3);
    
    return 0;
}