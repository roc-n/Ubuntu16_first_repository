#include <iostream>
#include "stack.h"

int main() {
    as dd = {0, 0, nullptr};
    dd.a = 100;
    std::cout << "Hello, World!" << std::endl;
    std::cout << dd.a << std::endl;
    std::cin >> dd.a;

    std::cout << dd.a << std::endl;
    return 0;
}
