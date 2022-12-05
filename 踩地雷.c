#include <stdio.h>
#include <stdlib.h>
int caseno, cases;
mines, height, width;
int hints[28][39];
int hasnextcase()
{
    if (cases == 0){
        scanf("%d", &cases);
    }
    if (cases == 0)
        return 0;
    if (cases > 0){
        scanf("%d%d%d", &mines, &height, &width);
    }
    --cases;
    ++caseno;
    return 1;
}
int getcaseno()
{

    return caseno;
}
int getheight()
{
    return height;
}
int getwidth()
{
    return width;
}
int getmines()
{
    return mines;
}
void setmines()
{
    int x, y, i;
    for (y = 1; y <= height; ++y)
        for (x = 1; x <= width; ++x)
            hints[y][x] = 0;
    for (i = 0; i < mines; i++)
    {
        scanf("%d%d", &x, &y);
        hints[y - 1][x - 1]++;
        hints[y - 1][x]++;
        hints[y - 1][x + 1]++;
        hints[y][x - 1]++;
        hints[y][x] = -99;
        hints[y][x + 1]++;
        hints[y + 1][x - 1]++;
        hints[y + 1][x]++;
        hints[y + 1][x + 1]++;
    }
}
void drawhints()
{
    int m, x, y;
    for (y = 1; y <= height; ++y)
    {
        printf("|");
        for (x = 1; x <= width; ++x)
        {
            m = hints[y][x];
            printf("%c", m < 0 ? '*' : m > 0 ? m + '0': ' ');
        }
        printf("|\n");
    }
}
int main()
{
    int i;
    while (hasnextcase())
    {
        printf("Case %d: %d mines of %dX%d\n", getcaseno(), getmines(), getheight(), getwidth());
        setmines();
        printf("+");
        for (i = 0; i < width; i++)
            printf("-");
        printf("+\n");
        drawhints();
        printf("+");
        for (i = 0; i < width; i++)
            printf("-");
        printf("+\n");
    }
}