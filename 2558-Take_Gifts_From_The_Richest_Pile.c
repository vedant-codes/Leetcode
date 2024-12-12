#include <math.h>

long long pickGifts(int* gifts, int giftsSize, int k) {
    while (k > 0) {
        int index = 0;

        for (int i = 1; i < giftsSize; i++) {
            if (gifts[i] > gifts[index]) {
                index = i;
            }
        }

        gifts[index] = (int)floor(sqrt(gifts[index]));
        k--;
    }

    long long sum = 0;
    for (int i = 0; i < giftsSize; i++) {
        sum += gifts[i];
    }

    return sum;
}
