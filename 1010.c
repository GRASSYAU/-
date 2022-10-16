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

    printf("%d line",line);
    if(line>1){
        printf("s");
    }
    printf(", %d character",characters);
    if(letters>1){
        printf("s");
    }
    printf(", %d letter",letters);
    if(characters>1){
        printf("s");
    }
    printf(", %d digit",digits);
    if(digits>1){
        printf("s");
    }
    printf("\n");
}