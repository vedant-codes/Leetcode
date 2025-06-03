#include <stdio.h>

int maxProduct(int* nums, int numsSize) {
    int max = nums[0];
    int min = nums[0];
    int result = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < 0) {
            int temp = max;
            max = min;
            min = temp;
        }

        max = nums[i] > nums[i] * max ? nums[i] : nums[i] * max;
        min = nums[i] < nums[i] * min ? nums[i] : nums[i] * min;

       
        result = max > result ? max : result;
    }

    return result;
}
