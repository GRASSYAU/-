#include<stdio.h>

int main(){
    int x=1, k, caseno=0,even,loop,exp,sign;
    long long xexp,sum;
    while(x){
        scanf("%d%d",&x,&k);
        if(x!=0){
            printf("Case %d: ", ++caseno);
            even=2,exp=1,sign=1,sum=0,xexp=x;
            for(loop=0;loop<k;++loop,
            even=even+2,exp=exp+2,
            sign=sign*-1,xexp=xexp*x*x
            ){
                if(loop>0)
                    if(sign==1){
                        printf("+");
                    }else{
                        printf("-");
                    }
                printf("%d*%d^%d",even,x,exp);
                sum= sum+sign*even*xexp;
            }
        }
        printf("=%lld\n",sum);
    }
}