#include <stdio.h>

int main()
{
    int i, j, n = 10;
    for (i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            {
                for (int j = 1; j <= n; j++)
                {
                    printf("# ");
                }

            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    printf("# ");
                }
                else
                {
                    printf("  ");
                }
            }
            
        }
        printf("\n");
    }
    return 0;
}