#pragma once
#include <iostream>

// static int g_two = 1;

class Two
{
  private:
    int _m;
    int _n;

  public:
    Two(int m, int n)
    {
        _m = m;
        _n = n;
    }
    int max();
    void info();
};
