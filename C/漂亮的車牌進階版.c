#include <stdio.h>

int main(){
    int cases,count,a,digit,letter,last,absolute;
    scanf("%d\n",&cases);
    count=0;
    while(cases--){//Case寫死的通用版本
        printf("Case %d: ",++count);
        digit=letter=0;
        while((a=getchar()) != '\n'){
            putchar(a);
            if('0'<=a&&a<='9'){
                digit=digit*10+(a-'0');
                last=1;
            }else if('A'<=a&&a<='Z'){
                letter=letter*26+(a-'A');
                last=2;
            }
        }
        absolute=digit-letter;
        if(absolute<0){
            absolute=-absolute;
        }
        if(last==2){
            digit-last;
            printf("=|%d-%d|=|%d|=%d ==> ",digit,letter,digit-letter,absolute);
        }else{
            printf("=|%d-%d|=|%d|=%d ==> ",letter,digit,letter-digit,absolute);
        }
        if(1<=absolute&&absolute<=100){
            printf("nice\n");
        }else{
            printf("not nice\n");
        }
    }
}