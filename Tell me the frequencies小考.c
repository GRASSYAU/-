#include <stdio.h>
#define MAX 32
int ascii[128];
int binary_cal(int n){  
    int i=0,a[MAX],control=0;
    while (n>0)   //迴圈過程的始終，判斷n是否能被2除盡
    {
        a[i] = n%2;   //用陣列儲存每次除以2之後的餘數，即斷定奇偶性，對應二進位制位上數值
        i = i+1;
        n = n/2;
    }
    for(; i > 0; i--){
        if(i+1==7&&control==0){
            printf("0");
            control++;
        }
        else{
            control++;
        }
        printf("%d",a[i-1]);
        if(i-1==4){
            printf("-");
        }
    }
}  
void function(){
    int i;
    //printf("print answer right here!\n");
    int maxascii;
    int maxcode;
    for(;;){
        maxascii=0;
        for(i=' ';i<='~';++i){
        if(ascii[i]==0){
            continue;
        }
        if(ascii[i]>maxascii){
            maxascii = ascii[i];
            maxcode=i;
        }else if(ascii[i]== maxascii){
                if(maxcode>i){
                    maxascii=ascii[i];
                    maxcode=i;
                }
        }
    }
    if(maxascii==0) break;
    printf("%02d '%c' %x ",ascii[maxcode],maxcode,maxcode);
    binary_cal(maxcode);
    printf("\n");
    ascii[maxcode]=0; //下一個案例清理為零
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