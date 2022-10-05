#include<stdio.h>  
int main(){  
    int c,a,b,savey,even,count,flag;  
    for(;;){  
    scanf("%d",&a);  
    savey=a;  
    b=1073741824;  
    if(a==0) return 0;  
    even=0,count=0,flag=1;  
    while((c=getchar())!='\n'){  
        if(c=='o') even=1;  
    }  
    for(;;){  
        if(a==0) break;  
        b=a%2;  
        a=a/2;  
        if(b==1) count++;  
    }  
    if(even==0) printf("The even parity of %d is ",savey);  
    else printf("The odd parity of %d is ",savey);  
    if(count%2==even) printf("0 such that ");  
    if(count%2!=even) printf("1 such that ");  
    a=savey,b=1073741824;  
    for(;;){  
        if(b==0) break;  
        if(a>=b){  
            a=a-b;  
            printf("1^");  
            flag=0;  
        }else if(flag==0) printf("0^");  
        b=b/2;  
    }  
    if(count%2==even) printf("0");  
    if(count%2!=even) printf("1");  
    if(even==0) printf(" = 0.\n");  
    else printf(" = 1.\n");   
    }  
}