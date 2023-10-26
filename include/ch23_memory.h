#pragma once
#include <array>
#include <chrono>
#include <iostream>
#include <memory>

class Timer
{
private:
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> duration;

public:
    Timer()
    {
        start = std::chrono::steady_clock::now();
    }

    ~Timer()
    {
        end = std::chrono::steady_clock::now();

        duration = end - start;
        std::cout << "Timer Usage: " << duration.count() << "ms" << std::endl;
    }
};

struct Coordinate
{
    float x, y;
};

void test_memory_ptr()
{
    std::cout << "Make Shared" << std::endl;
    {
        Timer timer;
        std::array<std::shared_ptr<Coordinate>, 1000> sharedPtrArray;
        for (int i = 0; i < sharedPtrArray.size(); i++)
        {
            sharedPtrArray[i] = std::make_shared<Coordinate>();
        }
    }

    std::cout << "New Shared" << std::endl;
    {
        Timer timer;
        std::array<std::shared_ptr<Coordinate>, 1000> sharedPtrArray;
        for (int i = 0; i < sharedPtrArray.size(); i++)
        {
            sharedPtrArray[i] = std::shared_ptr<Coordinate>(new Coordinate);
        }
    }

    std::cout << "Make Unique" << std::endl;
    {
        Timer timer;
        std::array<std::unique_ptr<Coordinate>, 1000> uniquePtrArray;
    }
}
