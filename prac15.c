#include<stdio.h>

int main(){
    float a[5];
    int s=0;
    printf("enter the values\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f",&a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%f ",a[i]);
        s=s+a[i];
    }
    printf("%d",s);
    return 0;
}