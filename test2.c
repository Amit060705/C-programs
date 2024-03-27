#include<stdio.h>

int main(){
    int unit;
    printf("enter no. of units\n");
    scanf("%d",&unit);
    if (unit<0)
    {
        printf("input is invalid\n");
    }
    else{
        if (unit>=0 && unit<=100)
        {
            printf("rent is 200\n");
        }
        else if (unit>=101 && unit<=200)
        {
            printf("rent is %5.2f\n",200+((unit-100)*4.5));
        }
         else if (unit>=201 && unit<=300)
        {
            printf("rent is %5.2f\n",200+450+((unit-200)*5.5));
        }
        else
        {
            printf("rent is %5.2f\n",200+450+550+((unit-300)*6.5));
        }
    }
    
    return 0;
}