#include <stdio.h>  
#include <stdlib.h>  
  
int main()  
{  
    int cases;  
    scanf("%d",&cases);  
    int i;  
    double x;  
    for(i=1;i<=cases;i++){  
        printf("Case %d:\n",i);  
        scanf("%lf",&x);  
        //printf("x=%lf\n",x);  
        double term=x;  
        int f=2;  
        double sum=0;  
        int sign=1;  
        int loop=1;  
        printf("No Term               Summation\n");  
        printf("-- ------------------ ------------------\n");  
        while(term>=0.0000000001){  
            sum=sum+term*sign;  
            printf("%2d %18.10lf %18.10lf\n",loop++,term*sign,sum);  
            term=term*x*x/(f*(f+1));  
            //printf("fact=%d\n",f*(f+1));
            sign=sign*-1;  
            f=f+2;  
        }  
        printf("-- ------------------ ------------------\n");  
        printf("sin(%.10lf)=%.10lf\n",x,sum);  
    }  
    return 0;  
}