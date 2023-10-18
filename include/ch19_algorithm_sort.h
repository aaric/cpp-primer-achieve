#pragma once
#include <algorithm>
#include <iostream>
#include <vector>

void test_algorithm_sort()
{
    std::vector<int> values = {3, 5, 1, 4, 2};
    // std::sort(values.begin(), values.end(), std::greater<int>());
    std::sort(values.begin(), values.end(), [](int a, int b) {
        if (1 == a)
        {
            return true;
        }
        if (1 == b)
        {
            return false;
        }
        return a > b;
    });

    for (int value : values)
    {
        std::cout << value << std::endl;
    }
}
