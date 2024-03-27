#include<stdio.h>

int main(){
    float a,b,s=0;
    scanf("%f",&a);
    for (int i = 1; i<=5; i++)
    {
        if (i==1)
        {
            b=0;
        }
        else if(i==2)
        {
            b=2;
        }   
        else{
            b++;
        }    
        s=s+((a+b)/(a*a));       
    }
    printf("%f\n",s);   
    return 0;
}