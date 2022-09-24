#include <stdio.h>

int main(){
    int b,x,y;
    scanf("%d",&b);

    if(b==8){
        scanf("%o %o",&x,&y);
        printf("(%o)+(%o)=%o\n",x,y,x + y);
        printf("(%o)-(%o)=%o\n",x,y,x - y);
        printf("(%o)*(%o)=%o\n",x,y,x * y);
        printf("(%o)/(%o)=%o...%o\n",x,y,x/y,x%y);
    }else if(b==10){
        scanf("%d %d",&x,&y);
        printf("(%d)+(%d)=%d\n",x,y,x + y);
        printf("(%d)-(%d)=%d\n",x,y,x - y);
        printf("(%d)*(%d)=%d\n",x,y,x * y);
        printf("(%d)/(%d)=%d...%d\n",x,y,x/y,x%y);
    }else if(b==16){
        scanf("%x %x",&x,&y);
        printf("(%x)+(%x)=%x\n",x,y,x + y);
        printf("(%x)-(%x)=%x\n",x,y,x - y);
        printf("(%x)*(%x)=%x\n",x,y,x * y);
        printf("(%x)/(%x)=%x...%x\n",x,y,x/y,x%y);
    }
    return 0;
}