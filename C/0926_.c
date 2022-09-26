#include <stdio.h>
int main()
{
    int count;
    int memory, max, min, sum = 0;
    double avg;
    scanf("%d",&count);
    for(int cases=1;cases<=count;cases++)
    {   
        scanf("%d",&memory);
        int array[memory];
        for (int i = 0; i < memory; i++)
        {
            scanf("%d", &array[i]);
        }
        max = array[0];
        min = array[0];
        for (int i = 0; i < memory; i++)
        {
            if (max < array[i])
            {
                max = array[i];
            }else if (min > array[i])
            {
                min = array[i];
            }
            sum = sum + array[i];
        }
        avg = memory / 1.0;
        avg = sum / avg;
        printf("Case %d:\n", cases);
        printf("max=%d\nmin=%d\nsum=%d\navg=%.2f\n", max, min, sum, avg);
        sum = 0;
    }
}