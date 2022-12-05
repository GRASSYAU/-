#include <stdio.h>
#include <stdlib.h>
int caseno = 1, cases, mines, height, width;
int grid[18][32];
int hasNextCase(){
    if (scanf("%d%d%d", &mines, &height, &width) < 3)
        return 0;
    if (caseno > 0){
        scanf("%d%d%d", &mines, &height, &width);
    }
    return 1;
}
int getCaseNo()
{
    return caseno;
}
int getHeight()
{
    return height;
}
int getWidth()
{
    return width;
}
int getMines()
{
    return mines;
}
void setMines()
{
    int x, y, i;
    for (y = 1; y <= height; ++y)
        for (x = 1; x <= width; ++x)
            grid[y][x] = 0;
    for (i = 0; i < mines; i++)
    {
        scanf(" (%d,%d)", &x, &y);
        grid[y - 1][x - 1]++;
        grid[y - 1][x]++;
        grid[y - 1][x + 1]++;
        grid[y][x - 1]++;
        grid[y][x] = -99;
        grid[y][x + 1]++;
        grid[y + 1][x - 1]++;
        grid[y + 1][x]++;
        grid[y + 1][x + 1]++;
    }
}
void drawHints()
{
    int m, x, y, i;
    for (i = 0; i < width; i++)
        printf("-");
    printf("+\n");
    for (y = 1; y <= height; ++y)
    {
        printf("|");
        for (x = 1; x <= width; ++x)
        {
            m = grid[y][x];
            printf("%c", m < 0 ? '*' : m > 0 ? m + '0': ' ');
        }
        printf("|\n");
        
    }
    printf("+");
    ++caseno;
    for (i = 0; i < width; i++)
        printf("-");
}