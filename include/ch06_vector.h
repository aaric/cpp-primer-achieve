#pragma once
#include <iostream>
#include <vector>

void test_syntax_vector()
{
    std::vector<std::string> strings;
    strings.push_back("Apple");
    strings.push_back("Banana");
    strings.push_back("Orange");

    for (std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    for (auto it = strings.begin(); it != strings.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}

void test_syntax_vector_v1()
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
