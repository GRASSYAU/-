#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void getPermutation(int n, int k, char* result) {
    int* nums = (int*)malloc(n * sizeof(int));
    int i, j, index, rank;
    for(i = 0; i < n; i++) {
        nums[i] = i + 1;
    }
    k--;
    for(i = 0; i < n; i++) {
        index = k / factorial(n - 1 - i);
        result[i] = nums[index] + '0';
        for(j = index; j < n - 1 - i; j++) {
            nums[j] = nums[j + 1];
        }
        k %= factorial(n - 1 - i);
    }
    result[n] = '\0';
    free(nums);
}

int main() {
    int n, k;
    char result[10];
    while(scanf("%d %d", &n, &k) == 2) {
        getPermutation(n, k, result);
        printf("%s\n", result);
    }
    return 0;
}