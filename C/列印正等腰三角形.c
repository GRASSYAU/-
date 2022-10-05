#include <stdio.h>

int main(){
    int cases,max,lower,step,star,space;
    scanf("%d",&cases);
    for(int loop = 1;loop<=cases;loop++){

        scanf("%d",&max);
        // printf("max: %d\n",max);
        lower=star=1;
        step=2;
        space=(max-1)/2;

        
        while (star<=max)
        {
            // printf("star=%d\n",star);
            for(int y=1;y<=space;y++){
                printf(" ");
            }
            for(int x=1;x<=star;x++){
                printf("*");
            }
            printf("\n");
            star+=step;
            space--;
        }
        
    }
}