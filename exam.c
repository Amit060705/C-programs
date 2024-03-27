#include <stdio.h>
#include<string.h>
struct personal
{
    char name[20];
    char date[10];
    double salary;
};

void display(struct personal member[],int count){
    printf("Name\tDate\tSalary\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s\t",member[i].name);
        printf("%s\t",member[i].date);
        printf("%lf\n",member[i].salary);
    }
}

int main()
{
    int num_mem;
    printf("enter number of members\n");
    scanf("%d",&num_mem);
    struct personal member[num_mem];
    for (int i = 0; i < num_mem; i++)
    {
        printf("Name:\n");
        scanf("%s",&member[i].name);
        printf("Date:\n");
        scanf("%s",&member[i].date); 
        printf("Salary:\n");
        scanf("%lf",&member[i].salary);  
    }
    display(member,num_mem);
    
    return 0;
}