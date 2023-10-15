#pragma once
#include <iostream>

template <typename T>
void Print(T value)
{
    std::cout << value << std::endl;
}

template <typename T, int N>
class Array
{
private:
    T m_Array[N];

public:
    int GetSize() const
    {
        return N;
    }
};

void test_syntax_template()
{
    Print(18);
    Print("Aaric");

    //    Array<10> array;
    //    std::cout << array.GetSize() << std::endl;

    Array<std::string, 10> array;
    std::cout << array.GetSize() << std::endl;
}
