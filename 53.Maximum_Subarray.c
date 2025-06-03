int maxSubArray(int* nums, int numsSize) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for(int i = 1; i < numsSize; i++){
        if(currentSum < 0){
            currentSum = nums[i];
        }
        else
            currentSum += nums[i];

        if(currentSum > maxSum){
            maxSum = currentSum;
        }
    }
    return maxSum;
}
