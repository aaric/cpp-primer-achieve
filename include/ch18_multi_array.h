#pragma once
#include <iostream>

void PrintArray0()
{
    int** a2d = new int*[5];
    for (int y = 0; y < 5; ++y)
    {
        a2d[y] = new int[5];
    }

    for (int y = 0; y < 5; ++y)
    {
        for (int x = 0; x < 5; ++x)
        {
            a2d[x][y] = x * y;
            std::cout << a2d[x][y] << "\t";
        }
        std::cout << "" << std::endl;
    }

    for (int y = 0; y < 5; ++y)
    {
        delete[] a2d[y];
    }
    delete[] a2d;
}

void PrintArray1()
{
    int* arr = new int[5 * 5];

    for (int y = 0; y < 5; ++y)
    {
        for (int x = 0; x < 5; ++x)
        {
            arr[x + y * 5] = x * y;
            std::cout << arr[x + y * 5] << "\t";
        }
        std::cout << "" << std::endl;
    }

    delete[] arr;
}

void test_multi_array()
{
    PrintArray0();

    PrintArray1();
}
