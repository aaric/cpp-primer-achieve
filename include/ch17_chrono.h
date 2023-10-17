#pragma once
#include <chrono>
#include <iostream>
#include <thread>

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

void ForEach()
{
    Timer timer;

    for (int i = 0; i < 100; ++i)
    {
        std::cout << "Value: " << i << std::endl;
    }
}

void test_syntax_chrono()
{
    // using namespace std::literals::chrono_literals;
    // auto start = std::chrono::high_resolution_clock::now();
    // std::this_thread::sleep_for(1s);
    // auto end = std::chrono::high_resolution_clock::now();

    // std::chrono::duration<float> duration = end - start;
    // std::cout << "Working: " << duration.count() << std::endl;

    ForEach();
}
