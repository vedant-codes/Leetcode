/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void sort(int* nums, int numsSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int *sq = (int*)malloc(numsSize * sizeof(int));
    if (!sq) return NULL; 

    for (int i = 0; i < numsSize; i++) {
        sq[i] = nums[i] * nums[i];
    }

    sort(sq, numsSize);

    *returnSize = numsSize;
    return sq;
}
