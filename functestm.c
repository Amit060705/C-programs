#include<stdio.h>
void prime()
{
    int n=1,c;
    printf("how much prime numbers you want to print\n");
    scanf("%d",&c);
    for (int i = 1; i <= c;)
    {
        int count=0;
        for (int j = 1; j <= n; j++)
        {
            if(n % j == 0)
            {
                count++;
            }
        }
        if (count==2)
        {
            printf("%d\n",n);
            i++;
        }
        n++;
    }
}
void armstrong()
{
    int n, s = 0, d, c=0, a = 1;
    printf("how many armstrong numbers you want to print\n");
    scanf("%d", &c);
    for (int i = 1; i <= c;)
    {
        n = a;
        s=0;
        while (n > 0)
        {
            d = n % 10;
            s = s + (d * d * d);
            n = n / 10;
        }
        if (s == a)
        {
            printf("%d is a armstrong number\n", a);
            i++;
        }
        a++;
    }
}
void perfect(){
    int n,sum=0;
    printf("enter a number to check perfect or not\n");
    scanf("%d",&n);
    for (int i = 1; i < n;i++)
    {
        if (n%i==0)
        {
            sum+=i;
        } 
    }
    
    if (sum==n)
    {
        printf("this is a perfect number\n");
    }
}
void factor(){
    int n,sum=0;
    printf("enter a no. to get their factors\n");
    scanf("%d",&n);
    for (int i = 1; i <= n;i++)
    {
        if (n%i==0)
        {
            printf("%d ",i);
        } 
    }
    printf("\n");
    
}
void lcm(){
    int n,a,b,sum=0;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    for (int i = 1; i <=99999;i++)
    {
        if (i%a==0 && i%b==0)
        {
            printf("lcm is %d\n",i);
            break;
        } 
    }
}
void hcf(){
    int n,a,b,sum=0,max;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        n=a;
    }
    else 
        n=b;
    
    for (int i = 1; i <=n;i++)
    {
        if (a%i==0 && b%i==0)
        {
            max=i;
        } 
    }
    printf("hcf is %d\n",max);
}
int main()
{
    prime();
    armstrong();
    perfect();
    factor();
    lcm();
    hcf();
    return 0;
}