#include <iostream>
#include <vector>

#include "matrix.hpp"


using math::Matrix;

int main() {
    std::cout << "[matrix size]: ";
    size_t n, m;
    std::cin >> n >> m;

    Matrix matrix(n, m);
    std::cin >> matrix;

    // vector is not a sparse matrix (so it's not Matrix)
    std::vector<int> vec;
    vec.reserve(m);
    for (auto i = 0; i < m; ++i)
        vec.push_back(matrix.line_sum_above_average(i));

    std::cout << matrix;
    // print vector
    std::cout << "Vector:" << std::endl;
    for (auto e : vec)
        std::cout << e << " ";
    std::cout << std::endl;
}