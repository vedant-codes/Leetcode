long long continuousSubarrays(int* nums, int numsSize) {
    int i = 0, j = 0;
    long long total = 0;

    int minDeque[numsSize], maxDeque[numsSize];
    int minFront = 0, minBack = 0, maxFront = 0, maxBack = 0;

    while (j < numsSize) {
        while (minBack > minFront && nums[minDeque[minBack - 1]] > nums[j]) minBack--;
        minDeque[minBack++] = j;

        while (maxBack > maxFront && nums[maxDeque[maxBack - 1]] < nums[j]) maxBack--;
        maxDeque[maxBack++] = j;

        while (nums[maxDeque[maxFront]] - nums[minDeque[minFront]] > 2) {
            if (minDeque[minFront] == i) minFront++;
            if (maxDeque[maxFront] == i) maxFront++;
            i++;
        }

        total += (j - i + 1);
        j++;
    }
    return total;
}


