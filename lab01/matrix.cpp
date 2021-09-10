#include "matrix.hpp"

namespace math {
    Matrix::Matrix(const size_t n, const size_t m) : n(n), m(m) {}

    int Matrix::line_average(const size_t i) const {
        int s = 0;
        for (auto j = 0; j < n; ++j)
            s += this->get(i, j);
        return s / int(n);
    }

    int Matrix::line_sum_above_average(const size_t i) const {
        int aver = this->line_average(i);
        int s = 0;
        for (auto j = 0; j < n; ++j) {
            int elem = this->get(i, j);
            s += elem > aver ? elem : 0;
        }
        return s;
    }

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