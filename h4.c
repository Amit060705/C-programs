#include<stdio.h>

int main(){
    float a=1,b=2,c=6,s=0;
    for (int i = 1; i<=8; i++)
    {
        if (i%2==1)
        {
            s=s+((a+b)/c);
        }
        else{
            s=s-((a+b)/c);
        }        
        a=a+1;
        b=b+1; 
        c=c+4;      
    }
    printf("%f\n",s);
    
    return 0;
}