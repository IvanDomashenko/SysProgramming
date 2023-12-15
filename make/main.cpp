#include <iostream>
#include "calculator.h"

int main() {
    Calculator calculator;

    double x = 10.5;
    double y = 5.3;

    std::cout << "Addition: " << calculator.Add(x, y) << std::endl;
    std::cout << "Subtraction: " << calculator.Sub(x, y) << std::endl;

    return 0;
}

