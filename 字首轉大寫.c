#include <stdio.h>

int main(){
    int a;
    int flag=0;
    while((a=getchar()) != EOF){
        if(flag==0&&'a'<=a&&a<='z'){
            a=a-'a'+'A';
        }else if(flag==1&&'A'<=a&&a<='Z'){
            a=a-'A'+'a';
        }
        if('a'<=a&&a<='z'||'A'<=a&&a<='Z'){
            flag=1;
        }else{
            flag=0;
        }
        putchar(a);
    }
}