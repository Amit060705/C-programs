#include <stdio.h>

int main()
{
    int ll, ul, t;
    scanf("%d\n%d", &ll, &ul);
    if (ll>ul)
    {
        t=ll;
        ll=ul;
        ul=t;
    }

    // for (int i = ll; i <= ul; i++)
    // {
    //     printf("%d\t", i);
    // }
    //  int i=ll;
    // while (i <= ul)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }
    
    int i=ll;
    do
    {
        printf("%d\t",i);
        i++;
    } while (i<=ul);

    return 0;
}