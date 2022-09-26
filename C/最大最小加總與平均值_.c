#include <stdio.h>

int main(){
    int max,min,memory,sum=0;
    int cases=1;//case的變數從1開始以此類推
    double avg;//平均值
    while(scanf("%d",&memory)){
        //memory 輸入總共有幾個數字要計算
        if (memory ==0){
            break;
            //輸入0 結束這個函式
        }
        int array[memory];
        //名為array的陣列，接收來自memory變數的值(數字)
        for(int i=0;i<memory;i++){
            scanf("%d",&array[i]);//memory 輸入要計算的數字
        }
        printf("Case %d:\n",cases);//題目的要得第一個輸出Case
        max=array[0];//array的第一個值(序列0.1.2....類推)
        for(int i=0;i<memory;i++){
            if(array[i]>max){
                max=array[i];
            }
        }
        //使用for迴圈尋找陣列中最大的數字，array這個陣列包了我所輸入的數字，使用if判斷式，迴圈陣列中的01234進去到[i]裡面，藉有比較運算子自動找到陣列中的最大數字
        min=array[0];
        for(int i=0; i<memory; i++){
            if (array[i]<min)
            {
                min=array[i];
            }
        }
        //同上，最小數字反之
        for(int i=0; i<memory; i++){
            sum = sum + array[i];
        }
        //計算所有數字的加總，單純使用for迴圈把array[i]這個陣列中的數字進行加總
        avg = memory/1.0;//把memory轉成小數點格式，C的低能規則，不這樣永遠算不出小數點
        avg = sum/avg;
        cases++;//結束一次的迴圈 Case+1
        printf("max=%d\nmin=%d\nsum=%d\navg=%.2f\n",max,min,sum,avg);
        sum =0;//結束第一組數字計算要把sum歸零，第二組才會計算錯
    }
}