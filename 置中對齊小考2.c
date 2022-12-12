#include <stdio.h>
#include <string.h>

#define MAXLINE 20
#define MAXLEN 120

void rightJustify(char string[], int width)
{

    printf("[");
    // 起 --
    int right;
    right = width - strlen(string);
    for (int i=0; i < right; ++i)
        printf(" ");
    printf("%s", string);

    // 尾--
    printf("]\n");
}

int main(const int argc, const char *argv[])
{

    char str[MAXLINE][MAXLEN] ;
    // 起 --
    int i, k, kk;
    int n;
    int width = 0;
    n = 0;
    while (1)
    {
        str[n][0] = 0;
        if (fgets(str[n], sizeof(str[n]), stdin) == NULL)
            break;
        strtok(str[n], "\r\n");
        if (str[n][0] == 0)
            break;
        i = strlen(str[n]);
        if (width < i)
            width = i;
        n++;
    }
    for (i = 0; i < n; ++i)
        rightJustify(str[i], width);
    return 0;
    // 尾--
}