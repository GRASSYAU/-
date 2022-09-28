#include <stdio.h>

int main()
{
    int cases,x,i;
    scanf("%d",&cases);
    for(int loop=1;loop<=cases;loop++){
        printf("Case #%d:\n", loop);
        scanf("%d",&x);
        
        for(i=9;i>=1;i--){
            printf("%d * %d = %d\n", x, i, x *i );
        }
        
    }
    return 0;
}
