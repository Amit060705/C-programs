#include<stdio.h>

int main(){
    float a[7],s=0,min;
    printf("enter the values\n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%f",&a[i]);
    }
    min=a[0];
    for (int i = 0; i < 7; i++)
    {
        printf("%f ",a[i]);
        if (a[i]<min)
        {
            min=a[i];
        }
        
    }
    printf("%f",min);
    return 0;
}