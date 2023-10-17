#pragma once
#include <iostream>
#include <vector>

// void HelloWord()
//{
//     std::cout << "hello world" << std::endl;
// }

void HelloWord(int age)
{
    std::cout << "hello world: " << age << std::endl;
}

void PrintValue(int value)
{
    std::cout << "Value: " << value << std::endl;
}

// void ForEach(const std::vector<int>& values, void (&func)(int))
//{
//     for (int value : values)
//     {
//         func(value);
//     }
// }

void ForEach(const std::vector<int>& values, void (*func)(int))
{
    for (int value : values)
    {
        func(value);
    }
}

void test_function_pointer()
{
    //    void (*FunctionName)();
    //    FunctionName = HelloWord;
    //    FunctionName();

    typedef void (*FunctionName)(int);
    FunctionName functionName = HelloWord;
    functionName(18);

    auto function = HelloWord;
    function(18);

    std::vector<int> values = {1, 5, 4, 2, 3};
    ForEach(values, PrintValue);
    ForEach(values, [](int value) { std::cout << "Value: " << value << std::endl; });
}
