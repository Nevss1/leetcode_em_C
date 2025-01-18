#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i+1; j< numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                // ponteiro criado, aponta para memória criada de um array 2 elementos
                int* p = (int*)malloc(2 * sizeof(int));
                p[0] = nums[i];
                p[1] = nums[j];
                *returnSize = 2;
                return p;
            }
        }
    }
}