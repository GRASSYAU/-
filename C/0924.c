#include <stdio.h>

int main(){
    for(;;){
        int cases, max, min, sum, avg,i,j,count;
        sum=0;
        scanf("%d",&cases);//輸入要跑幾組迴圈
        for(i=1;i<=cases;i++){
            printf("Case%d:\n",i);
            
            scanf("%d",&j);
            sum += j;
            printf("%d",sum);
        }
        // printf("avg:%.2f",(double) sum / count);
    }
    
    return 0;
}