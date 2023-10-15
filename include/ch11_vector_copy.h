#pragma once
#include <iostream>
#include <vector>

struct Axis
{
    float x, y, z;

    Axis(float x, float y, float z) : x(x), y(y), z(z)
    {
    }

    Axis(const Axis& other) : x(other.x), y(other.y), z(other.z)
    {
        std::cout << "Copied!" << std::endl;
    }
};

std::ostream& operator<<(std::ostream& stream, Axis a)
{
    stream << a.x << ", " << a.y << ", " << a.z;
    return stream;
}

void test_vector_copy()
{
    // int offset = (float)&((Axis*)nullptr)->x;
    // std::cout << offset << std::endl;

    std::vector<Axis> av0;
    //    av0.push_back({1, 2, 3});
    //    av0.push_back({4, 5, 6});
    //    av0.push_back({7, 8, 9});

    av0.reserve(3);
    av0.emplace_back(1, 2, 3);
    av0.emplace_back(4, 5, 6);
    av0.emplace_back(7, 8, 9);

    for (int i = 0; i < av0.size(); ++i)
    {
        std::cout << av0[i] << std::endl;
    }

    av0.erase(av0.begin() + 1);

    for (Axis& a : av0)
    {
        std::cout << a << std::endl;
    }
} // CPP_PRIMER_ACHIEVE_CH11_FUNCTION_POINTER_H
