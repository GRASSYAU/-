#include <stdio.h>

int main()
{
    int cases,loop,x,i;
    scanf("%d",&cases);//輸入要跑幾組迴圈
    for(loop=1;loop<=cases;loop++){
        //cases大於loop多少就跑幾次迴圈直到loop+等於cases
        scanf("%d",&x);
        //輸入妳要的99乘法表數值
        for(i=1;i<=9;i++){
            printf("%d*%d=%d\n", x, i, x *i );
        }//單純迴圈 沒啥好解釋的
    }
    return 0;
}
