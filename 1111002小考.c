#include <stdio.h>  

int main()  
{  
    int cases,loop,from, to;  
    for(loop=1;;loop++){  
        scanf("%d%d", &from, &to);
        if(from==0&&to==0){
            break;
        }
        printf("Case %d:\n",loop);
        if(from>to){
            for(int i=1; i<=9; i++) {
                for(int n=from; n>=to; n--) {  
                        if (n>to){  
                            printf("%d*%d=%2d,", n, i, n*i);  
                        }  
                        else {  
                            printf("%d*%d=%2d", n, i, n*i);  
                        }  
                }
                printf("\n");  
            }
        }
        else{
            for(int i=1; i<=9; i++) {
                for(int n=from; n<=to; n++) {  
                        if (n<to){  
                            printf("%d*%d=%2d,", n, i, n*i);  
                        }  
                        else {  
                            printf("%d*%d=%2d", n, i, n*i);  
                        }  
                }  
                printf("\n");  
            }
        }  
    } 
    return 0;  
}