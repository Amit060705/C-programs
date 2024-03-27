#include<stdio.h>
int bs(int a[],int low,int high,int num){
    int mid=(low+high)/2;
    if (a[mid]==num)
    {
        return mid;
    }
    else if (a[mid]<num)
    {
        return bs(a,mid+1,high,num);
    }
    else
        return bs(a,low,mid-1,num);
    
}
int main(){
    int a[8]={1,3,5,7,9,11,13,15};
    int low=0,high=7,num=3;
    printf("%d is found at position %d",num,bs(a,low,high,num));
    return 0;
}