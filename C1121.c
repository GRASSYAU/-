#include <stdio.h>
int ascii[128];
void function(){
    int i;
    printf("print answer right here!\n");
    int minascii;
    int mincode;
    for(;;){
        minascii=1024;
        for(i='!';i<='~';++i){
        if(ascii[i]==0){
            continue;
        }
        if(ascii[i]<minascii){
            minascii = ascii[i];
            mincode=i;
        }
    }
    if(minascii==1024) break;
    printf("%c %x %d %o ==> %d\n",mincode,mincode,mincode,mincode,ascii[mincode]);
    ascii[mincode]=0; //下一個案例清理為零
    }
    
}

int main(){
    int a;
    while((a=getchar()) != EOF){
        ++ascii[a];
        putchar(a);
        if(a=='\n') function();
    }
}