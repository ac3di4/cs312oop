#ifndef LAB01_MATRIX_HPP
#define LAB01_MATRIX_HPP

#include <unordered_map>
#include <utility> // pair
#include <iostream>


namespace math {
    class Matrix {
    private:
        size_t n, m;
        // i, j -> int
        std::unordered_map<size_t, std::unordered_map<size_t, int>> data;
    public:
        Matrix(size_t, size_t);

        int get(const size_t i, const size_t j) const {
            // not [] and contains because we need read-only
            try {
                return data.at(i).at(j);
            } catch (const std::out_of_range &_e) {
                return 0;
            }
        }

        friend std::ostream & operator <<(std::ostream &, const Matrix &);
        friend std::istream & operator >>(std::istream &, Matrix &);
    };
}


#endif //LAB01_MATRIX_HPP
