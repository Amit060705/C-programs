#include<stdio.h>

int main(){
    float a[5],s=0,max;
    printf("enter the values\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f",&a[i]);
    }
    max=a[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%f ",a[i]);
        if (a[i]>max)
        {
            max=a[i];
        }
        
    }
    printf("%f",max);
    return 0;
}