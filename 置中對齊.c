#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    char ch[20][128] = {};
    int i, k, kk;
    int maxLen, len, lenD2;
    maxLen = 0;
    for (i = 0;; ++i){
        if (fgets(ch[i], sizeof(ch[i]), stdin) == NULL)
            break;
        strtok(ch[i], "\r\n");
        if (ch[i][0] == 0)
            break;
        len = strlen(ch[i]);
        if (maxLen < len)
            maxLen = len;
    }
    for (k = 0; k < i; ++k){
        len = strlen(ch[k]);
        lenD2 = (maxLen - len) / 2;
        printf("[");
        for (kk = 0; kk < lenD2; ++kk)
            printf(" ");
        printf(ch[k]);
        kk += len;
        for (; kk < maxLen; ++kk)
            printf(" ");
        printf("]\n");
    }
    return 0;
}