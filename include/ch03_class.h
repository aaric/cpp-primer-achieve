#pragma once
#include "Two.h"
#include <iostream>
#include <memory>

void test_syntax_class()
{
    // std::unique_ptr<Two> two(new Two(10, 20));
    auto two = std::make_unique<Two>(10, 20);
    two->info();
    std::cout << "Two: max = "
              << two->max()
              //   << ", g_two: " << g_two
              << std::endl;
}
