#include <iostream>
#include <memory>
#include "Two.h"

extern int g_two;

int main(int argc, char **argv)
{
    // Tow class
    // std::unique_ptr<Two> two(new Two(10, 20));
    auto two = std::make_unique<Two>(10, 20);
    two->info();
    std::cout << "Two: max = " << two->max()
              << ", g_two: " << g_two
              << std::endl;

    // Command line parameters
    // for (int i = 0; i < argc; i++)
    // {
    //     std::cout << *argv[i] << std::endl;
    // }

    // C++ version
    // switch (__cplusplus)
    // {
    // case 199711L:
    //     std::cout << "C++98" << std::endl;
    //     break;
    // case 201103L:
    //     std::cout << "C++11" << std::endl;
    //     break;
    // case 201402L:
    //     std::cout << "C++14" << std::endl;
    //     break;
    // case 201703L:
    //     std::cout << "C++17" << std::endl;
    //     break;
    // case 202002L:
    //     std::cout << "C++20" << std::endl;
    //     break;
    // default:
    //     std::cout << "C++XX" << std::endl;
    //     break;
    // }

    // Hello World
    // std::cout << "hello world" << std::endl;

    return 0;
}