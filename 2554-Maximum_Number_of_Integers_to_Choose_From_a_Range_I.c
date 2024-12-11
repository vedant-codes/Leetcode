int maxCount(int* banned, int bannedSize, int n, int maxSum) {
    int *bannedArray = calloc(n + 1, sizeof(int));
    for (int i = 0; i < bannedSize; i++) {
        if (banned[i] <= n) {
            bannedArray[banned[i]] = 1;
        }
    }

    int count = 0;
    int sum = 0;

    for (int i = 1; i <= n; i++) { 
        if (bannedArray[i]) 
            continue;
        if (sum + i > maxSum) 
            break;

        sum += i;
        count++;
    }

    free(bannedArray);
    return count;
}
