#include <stdio.h>
#include <string.h>
int ascii[128];
int main(){
    char buf[1024];
    int i, min, mincode = 0, a, b;
    int c = 0;

    while (fgets(buf, sizeof(buf), stdin) != NULL){
        if (c == 1){

            ascii[10]--;
            printf("\n");
        }
        for (i = 0; buf[i] != '\0'; ++i)
            ++ascii[buf[i]];
        for (;;){
            min = 9999, mincode = 0;
            for (i = ' '; i <= '~'; ++i)
                if (ascii[i] != 0){
                    if (ascii[i] <= min)
                    {
                        min = ascii[i];

                        mincode = i;
                    }
                }
            if (min == 9999)
                break;
            printf("%d %d\n", mincode, ascii[mincode]);
            ascii[mincode] = 0;
        }
        c = ascii[10];
    }
}