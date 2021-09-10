#include <iostream>
#include "matrix.hpp"

using math::Matrix;

int main() {
    std::cout << "[matrix size]: ";
    size_t n, m;
    std::cin >> n >> m;

    Matrix matrix(n, m);
    std::cin >> matrix;

    // TODO: solve

    std::cout << matrix;
}