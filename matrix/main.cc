#include <iostream>
#include "matrix.h"

int main() {
    Matrix A(3, 4);

    A(0, 0) = 10;
    A(1, 2) = 25;
    A(2, 3) = 50;

    std::cout << A(0, 0) << "\n";
    std::cout << A(1, 2) << "\n";
    std::cout << A(2, 3) << "\n";

    const Matrix& B = A;

    std::cout << B(1, 2) << "\n";
    std::cout << B << "\n";
}
