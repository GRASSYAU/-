#include <stdio.h>

int main(){
    int i;
    for(i=1;;i++){
        int cases,loop,x,sum=0;
        scanf("%d",&cases);
        if(cases==0){
            break;
        }
        printf("Case %d:\n",i);
        for(loop=1;loop<=cases;loop++){
            scanf("%d",&x);
            sum+=x;
        }
        printf("sum=%d\n",sum);
    }
}