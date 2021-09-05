#include <iostream>
#include "matrix.hpp"

using math::Matrix;

int main() {
    // read matrix
    std::cout << "Enter n, and m: ";
    int n, m;
    std::cin >> n >> m;
    auto matrix = new Matrix(n, m);
    std::cin >> *matrix;

    // print matrix out
    std::cout << *matrix;

    return 0;
}
