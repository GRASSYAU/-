#include <stdio.h>
#include <math.h>

int main()
{
    int x, k;
    long long sum;
    int cases = 1;
    int i;
    int p = 2;
    while (1)
    {
        scanf("%d %d", &x, &k);
        if (x == 0 && k == 0)
            break;
        sum = 0;
        p = 2;
        printf("Case %d: ", cases);
        for (i = 1; i <= k; i++)
        {
            if (i % 2 == 0)
            {
                //-
                printf("-%d*%d^%d", p, x, 2 * i - 1);
                sum = sum - (p * pow(x, 2 * i - 1));
            }
            else
            {
                //+
                if (i == 1)
                    printf("%d*%d^%d", p, x, 2 * i - 1);
                else
                    printf("+%d*%d^%d", p, x, 2 * i - 1);

                sum = sum + (p * pow(x, 2 * i - 1));
            }
            p += 2;
        }
        printf("=%lld\n", sum);
        cases++;
    }
}