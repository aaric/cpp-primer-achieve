#pragma once
#include <iostream>

#define WAIT std::cin.get()
// #define LOG(x) std::cout << x << std::endl

#ifdef PR_DEBUG
#define LOG(x) std::cout << x << std::endl
#else
#define LOG(x)
#endif

#define PRINT                                                                                                          \
    void Print()                                                                                                       \
    {                                                                                                                  \
        std::cout << "hello word" << std::endl;                                                                        \
    }

PRINT

void test_syntax_macro()
{
    LOG("hello macro");

    Print();

    WAIT;
}
