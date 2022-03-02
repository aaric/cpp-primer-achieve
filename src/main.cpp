#include <iostream>
// #include <string>
// #include <cctype>
// #include <vector>
#include "syntax.h"

// extern int g_two;

int main(int argc, char **argv)
{

    // -- vector
    // std::vector<int> v1 = {1, 2, 3};
    // v1.push_back(4);
    // if (!v1.empty())
    // {
    //     std::cout << v1.size() << std::endl;
    // }
    // // -- old: for (std::vector<std::int>::iterator it1 = v1.begin(); it1 != v1.end(); it1++)
    // for (auto it1 = v1.begin(); it1 != v1.end(); it1++)
    // {
    //     std::cout << *it1 << std::endl;
    // }
    // const std::vector<std::string> v2(3, "abc");
    // for (auto it2 = v2.cbegin(); it2 != v2.cend() && !it2->empty(); it2++)
    // {
    //     std::cout << *it2 << std::endl;
    // }

    // -- auto & decltype
    test_syntax_auto();

    // -- Test string
    // test_syntax_string();

    // -- Test class
    // test_syntax_class();
    // std::cout << g_two << std::endl;

    // -- Command line parameters
    // command_line_parameters(argc, argv);

    // -- C++ version
    // cpp_version();

    // -- Hello World
    // hello_word();

    return 0;
}