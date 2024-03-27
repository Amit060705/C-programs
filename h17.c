#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (i==1 || i==n || j==1 || j==n)
    //         {
    //             printf("# ");
    //         }
    //         else{
    //             printf("  ");
    //         }
            
    //     }
    //     printf("\n");
        
    // }
    // int i=1;
    // while (i<=n)
    // {
    //     int j=1;
    //     while (j<=n)
    //     {
    //         if (i==1 || i==n || j==1 || j==n)
    //         {
    //             printf("#");
    //         }
    //         else{
    //             printf(" ");
    //         }
    //         j++;
            
    //     }
    //     printf("\n");
    //     i++;
    int i=1;
    do
    {
        int j=1;
        do
        {
            if (i==1 || i==n || j==1 || j==n)
            {
                printf("# ");
            }
            else{
                printf("  ");
            }
            j++;
        } while (j<=n);
        printf("\n");
        i++;
    } while (i<=n);
    
        
    
    
    
    return 0;
}