#include <stdio.h>
#include <math.h>
int main()
{
    int c, n = 1, cases;
    int in, en, s, count, d = 0;
    scanf("%d\n", &cases);
    while (cases >= 1){
        printf("Case %d: ", n);
        in = 0, en = 0, d = 0, count = 0;
        while ((c = getchar()) != '\n'){
            if (c >= 'A' && c <= 'Z'){
                putchar(c);
            }
            if (c >= '0' && c <= '9'){
                putchar(c);
            }
            if (c == '-'){
                putchar(c);
            }
            count += 1;
            if (c >= 'A' && c <= 'Z'){
                en = en * 26 + (c - 'A');
                if (count == 1){
                    d = 1;
                }
            }
            else if (c >= '0' && c <= '9'){
                in = in * 10 + (c - '0');
                if (count == 1){
                    d = 0;
                }
            }
        }

        if (d == 0){
            s = in - en;
            printf("=|%d-%d|=|%d|=%d ==> ", in, en, s, abs(s));
        }
        else if (d == 1){
            s = en - in;
            printf("=|%d-%d|=|%d|=%d ==> ", en, in, s, abs(s));
        }
        if (s >= -100 && s <= 100){
            printf("nice\n");
        }
        else{
            printf("not nice\n");
        }
        n += 1;
        cases -= 1;
    }
}