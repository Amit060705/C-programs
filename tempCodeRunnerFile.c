#include<string.h>
struct personal
{
    char name[20];
    char date[10];
    double salary;
};

display(struct personal * member){
    printf("%s",member->name);
    printf("%s",member->date);
    printf("%d",member->salary);
}

int main()
{
    struct personal * member;
    strcpy(member->name,"Amit");
    strcpy(member->date,"2 Feb");
    member->salary=15000;

    display(member);
    return 0;
}