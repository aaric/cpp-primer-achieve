#include <iostream>
// #include <string>
// #include <cctype>
// #include <vector>
#include "syntax.h"

extern int g_two;

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
    // auto m = 123;
    // decltype(m) n = 456;
    // std::cout << (m + n) << std::endl;

    // -- Test string
    // std::string line;
    // while (std::getline(std::cin, line))
    // {
    //     std::cout << line << std::endl;
    // }
    // std::string s1 = "hello", s2 = "world";
    // std::string s3 = s1 + s2;
    // -- error: std::string s4 = "hello" + "world";
    // std::cout << s3 << std::endl;
    // unsigned char c = '?';
    // std::cout << std::ispunct(c) << std::endl;
    //     std::string raw = R"(<html>
    // <head>
    //     <title>hello world</title>
    // </head>
    // <body>
    //     <h1>Test raw string.</h1>
    // </body>
    // </html>
    // )";
    //     std::cout << raw << std::endl;

    // -- Test class
    test_class();
    std::cout << g_two << std::endl;

    // -- Command line parameters
    // command_line_parameters(argc, argv);

    // -- C++ version
    // cpp_version();

    // -- Hello World
    // hello_word();

    return 0;
}