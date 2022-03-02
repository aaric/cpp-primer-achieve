#include "Two.h"

int Two::max()
{
    if (_m > _n)
    {
        return _m;
    }
    return _n;
}

void Two::info()
{
    std::cout << "Two: m = " << _m
              << ", n = " << _n
              << std::endl;
}
