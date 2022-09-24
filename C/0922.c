#include <stdio.h>

int main()
{
    int i, n;

    i = 1;
    n = 1;
    while (i <= 9)
    {
        while (n <= 9)
            {
                printf("%d*%d=%d\n", i, n, i * n);
                n++;
            }
        i++;
        n = 1;
    };
}
