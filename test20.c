#include<stdio.h>

int main(){
    int n,c,d;
    scanf("%d\n%d\n%d",&n,&c,&d);
    // for (int i =c; i <=d; i++)
    // {
    //     printf("%dx%d=%d\n",n,i,n*i);
    // }
    int i=c;
    // while (i<=d)
    // {
    //     printf("%dx%d=%d\n",n,i++,n*i);    
    // }
    do
    {
       printf("%dx%d=%d\n",n,i++,n*i);
    } while (i<=d);
    
    
    
    return 0;
}