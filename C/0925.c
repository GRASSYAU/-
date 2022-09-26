#include <stdio.h>
int main()
{
    int count = 1;
    int memory, max, min, sum = 0;
    double avg;
    while (scanf("%d", &memory))
    {
        if (memory == 0)
        {
            break;
        }
        int array[memory];
        for (int i = 0; i < memory; i++)
        {
            scanf("%d", &array[i]);
        }
        max = array[0];
        for (int i = 0; i < memory; i++)
        {
            if (max < array[i])
            {
                max = array[i];
            }
        }
        min = array[0];
        for (int i = 0; i < memory; i++)
        {
            if (min > array[i])
            {
                min = array[i];
            }
        }
        for (int i = 0; i < memory; i++)
        {
            sum = sum + array[i];
        }
        avg = memory / 1.0;
        avg = sum / avg;
        printf("Case %d:\n", count);
        printf("max=%d\nmin=%d\nsum=%d\navg=%.2f\n", max, min, sum, avg);
        count++;
        sum = 0;
    }
    return 0;
}