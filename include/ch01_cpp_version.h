#pragma once
#include <iostream>

void cpp_version()
{
    switch (__cplusplus)
    {
    case 199711L:
        std::cout << "C++98" << std::endl;
        break;
    case 201103L:
        std::cout << "C++11" << std::endl;
        break;
    case 201402L:
        std::cout << "C++14" << std::endl;
        break;
    case 201703L:
        std::cout << "C++17" << std::endl;
        break;
    case 202002L:
        std::cout << "C++20" << std::endl;
        break;
    default:
        std::cout << "C++XX" << std::endl;
        break;
    }
}
