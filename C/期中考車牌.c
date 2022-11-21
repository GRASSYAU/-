#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int dataToInt(const char *str)
{
    int ret;
    int i;
    if ((str[0] >= '0') && (str[0] <= '9'))
        return atoi(str);
    ret = 0;
    while (str[0] != 0)
    {
        ret *= 26;
        if ((str[0] >= 'a') && (str[0] <= 'z'))
            ret += str[0] - 'a';
        else if ((str[0] >= 'A') && (str[0] <= 'Z'))
            ret += str[0] - 'A';
        str++;
    }
    return ret;
}

int main(const int argc, const char *argv[])
{
    char ch[1024];
    int N, i;
    int a, b;
    char *bStr;
    char *aStr;
    int value;

    scanf("%d", &N);
    for (i = 1; i <= N; ++i)
    {
        scanf("%s", ch);
        aStr = ch;
        bStr = strchr(ch, '-');
        bStr[0] = 0;
        bStr++;

        a = dataToInt(aStr);
        b = dataToInt(bStr);

        value = abs(a - b);
        printf("Case %d: %s-%s=|%d-%d|=|%d|=%d ==> ", i, aStr, bStr, a, b, a - b, value);
        if (value <= 100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}