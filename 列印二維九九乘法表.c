#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d", &z);
    for (int j = 1; j <= z; j++)
    {
        scanf("%d", &x);
        printf("Case %d:\n", j);
        for (int i = 1; i <= 9; i++)
        {
            for (int k = 1; k <= x; k++)
            {
                if (k != 1)
                {
                    printf(",");
                }
                printf("%d*%d=%2d", k, i, i * k);
            }
            printf("\n");
        }
        for (int l = x + 1; l <= 9; l = l + x)
        {
            for (int i = 1; i <= 9; i++)
            {
                for (int k = l; k <= l + x - 1; k++)
                {
                    if (k >= 10)
                    {
                        break;
                    }
                    if (k != l)
                    {
                        printf(",");
                    }
                    printf("%d*%d=%2d", k, i, i * k);
                }
                printf("\n");
            }
        }
    }
}