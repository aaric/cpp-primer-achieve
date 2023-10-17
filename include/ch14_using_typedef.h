#pragma once
#include <iostream>
#include <unordered_map>
#include <vector>

void test_syntax_using_typedef()
{
    using StringMap0 = std::unordered_map<std::string, std::vector<std::string>>;
    typedef std::unordered_map<std::string, std::vector<std::string>> StringMap1;

    StringMap0 sm0;
    StringMap1 sm1;
}
