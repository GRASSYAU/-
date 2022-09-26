#include <stdio.h>

int main(){
    int max,min,memory,sum=0;
    int cases=1;
    double avg;
    while(scanf("%d",&memory)){
        if (memory ==0){
            break;
        }
        int array[memory];
        for(int i=0;i<memory;i++){
            scanf("%d",&array[i]);
        }
        printf("Case %d:\n",cases);
        max=array[0];
        for(int i=0;i<memory;i++){
            if(array[i]>max){
                max=array[i];
            }
        }
        min=array[0];
        for(int i=0; i<memory; i++){
            if (array[i]<min)
            {
                min=array[i];
            }
        }
        for(int i=0; i<memory; i++){
            sum = sum + array[i];
        }
        avg = memory/1.0;
        avg = sum/avg;
        cases++;
        printf("max=%d\nmin=%d\nsum=%d\navg=%.2f\n",max,min,sum,avg);
        sum =0;
    }
}