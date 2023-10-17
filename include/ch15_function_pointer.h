#pragma once
#include <functional>
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

void ForEach(const std::vector<int>& values, const std::function<void(int)>& func)
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
    //    ForEach(values, [](int value) { std::cout << "Value: " << value << std::endl; });

    int age = 18;
    // auto lambda = [=](int value) { std::cout << "Value: " << age << std::endl; };
    auto lambda = [=](int value) mutable {
        age = 35;
        std::cout << "Value: " << value << ", Age: " << age << std::endl;
    };
    ForEach(values, lambda);

    auto it = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; });
    std::cout << *it << std::endl;
}
