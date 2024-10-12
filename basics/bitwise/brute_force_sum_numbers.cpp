#include "brute_force_sum_numbers.h"


bool isSumPossible(const int arr[], const int sum) {
    constexpr int length = sizeof(arr);

    for (int i = 0; i < (1 << length); i++) {
        int combination_sum = 0;

        for (int j = 0; j < length; j++) {
            combination_sum += (i >> j) % 2 == 1 ? arr[j] : 0;

            if (combination_sum == sum) {
                return true;
            }
        }
    }

    return false;
}
