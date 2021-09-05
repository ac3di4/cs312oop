#ifndef LAB01_MATRIX_HPP
#define LAB01_MATRIX_HPP

#include <iostream>
#include <vector>

namespace math {
    class Matrix {
    private:
        int n, m;
        std::vector<int> data;
    public:
        Matrix(int, int);

        [[nodiscard]] inline int get(int row, int col) const {
            return data[row * n + col];
        }
        inline void set(int row, int col, int item) {
            data[row * n + col] = item;
        }

        friend std::ostream & operator <<(std::ostream &, const Matrix &);
        friend std::istream & operator >> (std::istream &, Matrix &);
    };
}


#endif //LAB01_MATRIX_HPP
