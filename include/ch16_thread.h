#pragma once
#include <iostream>
#include <thread>

static bool s_Finished = false;

void DoWork()
{
    using namespace std::literals::chrono_literals;

    while (!s_Finished)
    {
        std::cout << "Working: " << std::this_thread::get_id() << std::endl;
        std::this_thread::sleep_for(10s);
        std::cout << "Working: " << std::this_thread::get_id() << ", Finished!" << std::endl;
    }
}

void test_syntax_thread()
{
    std::thread worker(DoWork);

    std::cin.get();
    s_Finished = true;

    worker.join();
    std::cout << "Finished!(" << std::this_thread::get_id() << ")" << std::endl;
}
