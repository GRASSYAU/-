#include <stdio.h>


int main(){

int a,b;
// int c,d; //儲存輸入的值，才能在下面公式相加
// c = scanf("%d",&a);
// d = scanf("%d",&b);
scanf("%d %d",&a,&b);

printf("%d+%d=%d\n",a,b,a + b);
printf("%d-%d=%d\n",a,b,a - b);
printf("%d*%d=%d\n",a,b,a * b);
printf("%d/%d=%d...%d\n",a,b,a/b,a%b);

return 0;
}