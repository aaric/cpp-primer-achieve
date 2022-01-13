#include "Two.h"

int Two::max()
{
    if (this->_m > this->_n)
    {
        return this->_m;
    }
    return this->_n;
}

void Two::info()
{
    std::cout << "Two: m = " << this->_m
              << ", n = " << this->_n
              << std::endl;
}
