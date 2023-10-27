#pragma once
#include <fstream>
#include <iostream>
#include <optional>

std::optional<std::string> ReadFileAsString(const std::string& filePath)
{
    std::ifstream stream(filePath);
    if (stream)
    {
        std::string result;
        std::getline(stream, result);
        stream.close();
        return result;
    }
    return {};
}

void test_syntax_optional()
{
    std::optional<std::string> data = ReadFileAsString("data.txt");
    if (data.has_value())
    {
        std::cout << data.value() << std::endl;
    }
    else
    {
        std::cout << "error" << std::endl;
    }
}
