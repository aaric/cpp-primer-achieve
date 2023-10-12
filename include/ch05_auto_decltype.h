#pragma once
#include <iostream>

void test_syntax_auto()
{
    auto m = 123;
    decltype(m) n = 456;
    std::cout << (m + n) << std::endl;
}
