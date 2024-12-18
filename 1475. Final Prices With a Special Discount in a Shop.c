/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    int *ret_arr = (int*)malloc(sizeof(int)*pricesSize);
    for (int i = 0; i < pricesSize; i++) {
            ret_arr[i] = prices[i]; 
            for (int j = i + 1; j < pricesSize; j++) {
                if (prices[j] <= prices[i]) {
                    ret_arr[i] = prices[i] - prices[j];
                    break;
                }
            }
        }
        
        *returnSize = pricesSize; 
        return ret_arr;
    }
