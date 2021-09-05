#include "matrix.hpp"

namespace math {
    Matrix::Matrix(int n, int m) :n(n), m(m), data(n*m) {}

    std::ostream & operator <<(std::ostream &s, const Matrix &m) {
        s << "Size: " << m.n << "x" << m.m << std::endl;
        s << "Matrix:\n";
        for (int i = 0; i < m.m; ++i) {
            for (int j = 0; j < m.n; ++j)
                s << m.get(i, j) << " ";
            s << std::endl;
        }
        return s;
    }

    std::istream & operator >> (std::istream & s, Matrix & m) {
        for (int i = 0; i < m.n * m.m; ++i)
            s >> m.data[i];
        return s;
    };
}