#include <stdio.h>
void drawTriangle(int x, char y[])
{
    int j, len, idx = 0, star = 1, space;
    space = (x - 1) / 2;
    for (len = 0; y[len]; ++len)
        ;
    for (int i = 1; i <= x; i += 2)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= star; j++)
        {
            printf("%c", y[idx++ % len]);
        }
        printf("\n");
        star += 2;
        space--;
    }
}
int main()
{
    int cases, x;
    char str[64];
    scanf("%d", &cases);
    while (cases--)
    {
        scanf("%d%s", &x, &str[0]);
        drawTriangle(x, str);
    }
    return 0;
}