#include "matrix.hpp"

namespace math {
    Matrix::Matrix(const size_t n, const size_t m) : n(n), m(m) {}

    std::ostream & operator <<(std::ostream &s, const Matrix &matrix) {
        s << "Size: " << matrix.n << "x" << matrix.m << std::endl << "Matrix: " << std::endl;
        for (auto i = 0; i < matrix.m; ++i) {
            for (auto j = 0; j < matrix.n; ++j)
                s << matrix.get(i, j) << " ";
            s << std::endl;
        }
        return s;
    }

    std::istream & operator >>(std::istream &s, Matrix &matrix) {
        for (auto i = 0; i < matrix.m; ++i)
            for (auto j = 0; j < matrix.n; ++j) {
                int n;
                s >> n;
                if (n != 0)
                    matrix.data[i][j] = n;
            }
        return s;
    }
}