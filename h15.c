#include<stdio.h>

int main(){
    int s = 0,a,b;
    scanf("%d\n%d",&a,&b);
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            s = s + i;
        }
    }
    printf("%d ", s);
    return 0;
}