#include <thread>
#include <iostream>

int main() {
    std::thread([]{
        std::cout << "Hello, World-1!" << std::endl;
    }).join();

    std::thread([]{
        std::cout << "Hello, World-2!" << std::endl;
    }).join();

    return 0;
}
