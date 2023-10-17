#pragma once
#include <chrono>
#include <iostream>
#include <thread>

void test_syntax_chrono()
{
    using namespace std::literals::chrono_literals;
    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(1s);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = end - start;
    std::cout << "Working: " << duration.count() << std::endl;
}
