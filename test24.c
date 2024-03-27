#include <stdio.h>

int main()
{
     int n;
    scanf("%d", &n);
    // for (int i = 1; i <= (2 * n) - 1; i++)
    // {
    //     if (i % 2 == 1)
    //     {
    //         printf("%d\n", i);
    //     }
    //     i++;
    // }

   int i = 1;
// while (i <= (2*n)-1)
// {
//     if (i % 2 == 1)
//     {
//         printf("%d\n", i);
//     }
//     i++;
// }
do
{
    if (i%2==1)
    {
       printf("%d\n",i);
    }
    i++;

} while (i<=(2*n)-1);

return 0;
}