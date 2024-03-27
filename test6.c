#include<stdio.h>

int main(){
    int sum;
    printf("enter amount\n");
    scanf("%d",&sum);
    if (sum<0)
    {
        printf("input is invalid\n");
    }
    else{
        if (sum<=250000)
        {
            printf("tax is nil\n");
        }
        else if (sum>250000 && sum<=500000)
        {
            printf("tax is %f\n",(0.05*(sum-250000)));
        }
        else if (sum>500000 && sum<=800000)
        {
            printf("tax is %f\n",12500+(0.1*(sum-500000)));
        }
        else if (sum>800000 && sum<=1000000)
        {
            printf("tax is %f\n",12500+50000+(0.2*(sum-800000)));
        }
         else
        {
            printf("tax is %f\n",12500+50000+160000+(0.3*(sum-1000000)));
        }
    }
    return 0;
}