#include<stdio.h>
int bs(int a[],int low,int high,int num){
    // if (low > high) {
    //     return -1; // Element not found
    // }
    int mid=(high+low)/2;
    if (a[mid]==num)
        return mid;
    else if(a[mid]<num)
        return bs(a,mid+1,high,num);
    else 
        return bs(a,low,mid-1,num);    
}
int main(){
    int a[8]={3,5,7,9,11,13,15,17};
    int low=0,high=7,num;
//    int result=bs(a,low,high,num);
    for (int i = 0; i <= 7; i++)
    {
        scanf("%d",&num);
        printf("%d is found at position %d\n",num,bs(a,low,high,num));
    }
    // else
    //     printf("not found\n");
    return 0;
}