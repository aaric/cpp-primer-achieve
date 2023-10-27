#pragma once
#include <iostream>
#include <tuple>

std::tuple<std::string, int> InitKeyValue()
{
    return {"Aaric", 18};
}

void test_syntax_tuple()
{
    auto kv0 = InitKeyValue();
    std::string& k0 = std::get<0>(kv0);
    int v0 = std::get<1>(kv0);
    std::cout << k0 << ", " << v0 << std::endl;

    std::string k1;
    int v1;
    std::tie(k1, v1) = InitKeyValue();
    std::cout << k1 << ", " << v1 << std::endl;
}
