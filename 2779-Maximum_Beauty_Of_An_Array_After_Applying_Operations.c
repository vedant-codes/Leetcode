int maximumBeauty(int* arr, int n, int adj) {
    int maxVal = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    int bufSize = maxVal + 10;
    int* buf = (int*)calloc(bufSize, sizeof(int));

    for (int i = 0; i < n; i++) {
        int low = (arr[i] - adj >= 0) ? arr[i] - adj : 0;
        int high = (arr[i] + adj <= maxVal) ? arr[i] + adj + 1 : maxVal + 1;
        buf[low]++;
        if (high < bufSize) {
            buf[high]--;
        }
    }

    int maxOverlap = buf[0];
    for (int i = 1; i < bufSize; i++) {
        buf[i] += buf[i - 1];
        if (buf[i] > maxOverlap) {
            maxOverlap = buf[i];
        }
    }

    free(buf);
    return maxOverlap;
}
