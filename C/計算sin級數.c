#include<stdio.h>
int main(){
    int cases,sign;
    int count=0;
    double x,term,sum,xpow,fact,k;
    scanf("%d",&cases);
    while(cases--){
        printf("Case %d:\n",++count);
        scanf("%lf",&x);
        //printf("x=%1f\n",x);
        sign=1;
        fact=1.0;
        term=x;
        xpow=1;
        k=2.0; 
        sum=0;
        printf("No Term               Summation\n");
        printf("-- ------------------ ------------------\n");
        for(int i=1;term>0.0000000001;i++, 
        sign=sign*-1,
        xpow=x*x,
        fact=k*(k+1),
        k=k+2,
        term=term*xpow/fact){
            sum=sum+term*sign;
            printf("%2d %18.10lf %18.10lf\n",i,sign*term,sum);
            
        }
        printf("-- ------------------ ------------------\n");
        printf("sin(%.10f)=%.10lf\n",x,sum);
    }
}