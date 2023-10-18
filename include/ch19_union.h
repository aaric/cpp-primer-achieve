#pragma once
#include <iostream>

struct v2
{
    int x, y;
};

struct v4
{
    union {
        struct
        {
            int x1, y1, x2, y2;
        };
        struct
        {
            v2 z1, z2;
        };
    };
};

void PrintV2(const v2& v)
{
    std::cout << v.x << ", " << v.y << std::endl;
}

void test_syntax_union()
{
    struct Union
    {
        union {
            int a;
            float b;
        };
    };

    Union u0;
    u0.b = 5.0f;
    std::cout << u0.a << ", " << u0.b << std::endl;
    u0.a = 10;
    std::cout << u0.a << ", " << u0.b << std::endl;

    v4 v = {1, 2, 3, 4};
    PrintV2(v.z1);
    PrintV2(v.z2);
    v.x2 = 10;
    PrintV2(v.z1);
    PrintV2(v.z2);
}
