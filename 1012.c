#include <stdio.h>

int main(){
    int a;
    int line=0,count=0,characters=0,letters=0,digits=0,aa=0,marks=0,bb=0;
    while ((a=getchar()) != EOF){
        bb++;
        if(' '!=a&&a!='\t'&&a!='\n'){
            characters++;
        }
        if(count==0){
            printf("%04d: ",line+1);
            count++;
        }
        putchar(a);
        if(a=='\n'){
            count=0;
            line++;
        }
        if(' '==a||a=='\t'||a=='\n'){
            letters++;
        }
        if('0'<=a&&a<='9'){
            digits++;
        }
        if('a'<=a&&a<='z'||'A'<=a&&a<='Z'){
            aa++;
        }
    }
    marks=bb-digits-aa-letters;
    printf("%d line",line);
    if(line>1){
        printf("s");
    }
    printf(", %d punctuation mark",marks);
    if(marks>1){
        printf("s");
    }
    printf(", %d invisible character",letters);
    if(letters>1){
        printf("s");
    }
    printf("\n");
}
