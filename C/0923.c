#include <stdio.h>

int main()
{
    // int j, i, b, c, cases;
    // i = 1;
    // j = 1;
    // scanf("%d", &c);
    
    // while (i<=9)
    // {
    //     printf("%d*%d=%d\n", c, i, c * i);
    //     i++;
        
    // }

    int cases = 0; 
    int i = 1; 
    int c ;
    
    while(cases != -1) {
        scanf("%d", &c);
        while(i<=9){
            printf("%d*%d=%d\n",c, i, c * i );
            i++;
        }
        scanf("%d", &cases);
    } 
    
    
    return 0;
}
