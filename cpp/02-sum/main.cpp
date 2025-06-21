#include <iostream>
#include "sum.h"

int main() {
    int x, y;

    std::cout << "Provide 2 numbers: ";
    std::cin >> x >> y;
    std::cout << "Result: " << sum(x, y) << std::endl;

    return 0;
}