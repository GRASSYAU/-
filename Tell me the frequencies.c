#include <stdio.h>
char ascii[128];
void function(){
    int i;
    //printf("print answer right here!\n");
    int minascii;
    int mincode;
    for(;;){
        minascii=1024;
        for(i=32;i<=127;++i){
        if(ascii[i]==0){
            continue;
        }
        if(ascii[i]<minascii){
            minascii = ascii[i];
            mincode=i;
        }else if(ascii[i]== minascii){
                if(mincode<i){
                    minascii=ascii[i];
                    mincode=i;
                }
        }
    }
    if(minascii==1024) break;
    printf("%d %d\n",mincode,ascii[mincode]);
    ascii[mincode]=0; //下一個案例清理為零
    }
    
}
int main(){
    int a,r=0;
    while((a=getchar()) != EOF){
        ++ascii[a];
        //putchar(a);
        if(a=='\n') {
            if(r==1){
                printf("\n");
            }
            else{
                r=1;
            }
            function();
        }
    }
}