#include<stdio.h>
int sum,n1,n2,n3;
void line(){
    printf("_______\n");
}
void input(){
    printf("enter three numbers\n");
    scanf("%d %d %d",&n1,&n2,&n3);
}
void total(){
    sum=n1+n2+n3;
}
void output(){
    printf("total is %d and average is %d",sum,sum/3);
}
int main(){
    input(); line();
    total(); line();
    output(); line();
    return 0;
}