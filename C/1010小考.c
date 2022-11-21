#include <stdio.h>

int main(){
    int a;
    int line=0,count=0,characters=0,letters=0,digits=0;
    while ((a=getchar()) != EOF){
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
    }
    printf("%d line",line);
    if(line>1){
        printf("s");
    }
    printf(", %d invisible character",letters);
    if(letters>1){
        printf("s");
    }
    printf(", %d visible character",characters);
    if(characters>1){
        printf("s");
    }
    printf("\n");
}
