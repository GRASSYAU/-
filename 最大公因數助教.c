#include <stdio.h>
#include <stdlib.h>

int main(){
    int cases;
    int x,y,q,m,loop,savex,savey;
    scanf("%d",&cases);
    int i=0;
    while (cases--){
        printf("Case %d:\n",++i);
        scanf("%d%d",&x,&y);
        //printf("x=%d,y=%d\n",x,y);
        savex=x;
        savey=y;
        for (loop=1;y>0;++loop){
            q=x/y;
            m=x%y;
            printf("Loop %d: %d / %d = %d ... %d\n",loop,x,y,q,m);
            x=y;
            y=m;
        }
        printf("G.C.D. of %d and %d is %d\n", savex,savey,x);
    }
    return 0;
}