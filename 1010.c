#include <stdio.h>

int main(){
    int a;
    int line=0,count=0,characters=0,letters=0,digits=0;
    while ((a=getchar()) != EOF){
        characters++;
        if(count==0){
            printf("%03d: ",line+1);
            count++;
        }
        putchar(a);
        if(a=='\n'){
            count=0;
            line++;
        }
        if('a'<=a&&a<='z'||'A'<=a&&a<='Z'){
            letters++;
        }
        if('0'<=a&&a<='9'){
            digits++;
        }
    }
    printf("%d lines, %d characters, %d letters, %d digits",line,characters,letters,digits);
}