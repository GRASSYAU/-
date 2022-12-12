int caseno, cases; mines, height, width;
int grid[28][39];

if (cases == 0) { scanf("%d", &cases); }
    if (cases == 0)return 0;
    if (cases > 0) {
        scanf("%d%d%d", &mines, &height, &width);

    }
    --cases;
    ++caseno;
    return 1;

    
return caseno;

int x, y, i,c;
    printf("+");
for (c = 0; c < width; c++)printf("-");
        printf("+\n");
    for (y = 1; y <= height; ++y)
        for (x = 1; x <= width; ++x)
            grid[y][x] = 0;
    for (i = 0; i < mines; i++) {
        scanf("%d%d", &x, &y);
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

int m, x, y,c;
    for (y = 1; y <= height; ++y) {
        printf("|");
        for (x = 1; x <= width; ++x) {
            m = grid[y][x];
            printf("%c", m < 0 ? '*' : m > 0 ? m + '0' : ' ');
        }
        printf("|\n");
    }
printf("+");
for (c = 0; c < width; c++)printf("-");
        printf("+\n");