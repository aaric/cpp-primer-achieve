#pragma once
#include <iostream>
#include <memory>

void test_debug_break()
{
    int value = 0;
    for (int i = 0; i < 1000000; ++i)
    {
        value += 1;
    }
    std::cout << value << std::endl;

    __debugbreak();
}
