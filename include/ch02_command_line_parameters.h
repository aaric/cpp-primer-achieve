#pragma once
#include <iostream>

void command_line_parameters(int argc, char **argv)
{
    for (int i = 0; i < argc; i++)
    {
        std::cout << *argv[i] << std::endl;
    }
}
