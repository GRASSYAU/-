#include <stdio.h>

int main(){
    int cases,sign,k;
    int count=0;
    double x,term,fact,xpow,sum;
    scanf("%d",&cases);
    while(cases--){
        printf("Case %d:\n",++count);
        scanf("%lf",&x);
        //printf("x=%1f\n",x);
        sign=1;
        fact=1;
        term=1;
        xpow=1;
        k=1; //1
        sum=0;
        printf("No Term               Summation\n");
        printf("-- ------------------ ------------------\n");
        for(int i=1;term>= 0.000000000001;i++, sign=sign*-1,xpow=xpow*x*x,fact=fact*k*(k+1),k=k+2,term=xpow/fact){
            sum=sum+sign*term;
            printf("%2d %18.10lf %18.10lf\n",i,sign*term,sum);
            // printf("[%d]term=%lf, sum=%lf",i,term,sum);
            // printf("sign=%d,xpow=%lf,fact=%lf\n",sign,xpow,fact);
        }
        printf("-- ------------------ ------------------\n");
        printf("cos(%.10f)=%.10lf\n",x,sum);
    }
}