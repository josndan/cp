#include <iostream>
#include "brute_force_sum_numbers.h"

int main() {
    constexpr int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << isSumPossible(a, 7 + 8);
    return 0;
}
