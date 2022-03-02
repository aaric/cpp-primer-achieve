#include <iostream>
#include <string>
#include <memory>
#include <cctype>
#include <vector>
#include "Two.h"

void test_syntax_vector()
{
    std::vector<int> v1 = {1, 2, 3};
    v1.push_back(4);
    if (!v1.empty())
    {
        std::cout << v1.size() << std::endl;
    }
    // -- old: for (std::vector<std::int>::iterator it1 = v1.begin(); it1 != v1.end(); it1++)
    for (auto it1 = v1.begin(); it1 != v1.end(); it1++)
    {
        std::cout << *it1 << std::endl;
    }
    const std::vector<std::string> v2(3, "abc");
    for (auto it2 = v2.cbegin(); it2 != v2.cend() && !it2->empty(); it2++)
    {
        std::cout << *it2 << std::endl;
    }
}

void test_syntax_auto()
{
    auto m = 123;
    decltype(m) n = 456;
    std::cout << (m + n) << std::endl;
}

void test_syntax_string()
{
    std::string line;
    while (std::getline(std::cin, line))
    {
        std::cout << line << std::endl;
    }
    std::string s1 = "hello", s2 = "world";
    std::string s3 = s1 + s2;
    // std::string s4 = "hello" + "world";
    std::cout << s3 << std::endl;
    unsigned char c = '?';
    std::cout << std::ispunct(c) << std::endl;
    std::string raw = R"(<html>
<head>
    <title>hello world</title>
</head>
<body>
    <h1>Test raw string.</h1>
</body>
</html>
)";
    std::cout << raw << std::endl;
}

void test_syntax_class()
{
    // std::unique_ptr<Two> two(new Two(10, 20));
    auto two = std::make_unique<Two>(10, 20);
    two->info();
    std::cout << "Two: max = " << two->max()
              //   << ", g_two: " << g_two
              << std::endl;
}

void command_line_parameters(int argc, char **argv)
{
    for (int i = 0; i < argc; i++)
    {
        std::cout << *argv[i] << std::endl;
    }
}

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

void hello_word()
{
    std::cout << "hello world" << std::endl;
}
