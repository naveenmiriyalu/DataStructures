#include "matrix.h"
#include <cstddef>
#include <ostream>

Matrix::Matrix(): rows(0),cols(0){
}

std::size_t Matrix::getRows() const {
	return rows;
}

std::size_t Matrix::getCols() const {
	return cols;
}

Matrix::Matrix(std::size_t rows,std::size_t cols): rows(rows),cols(cols),data_(rows*cols) {
}

int& Matrix::operator()(std::size_t row,std::size_t col) {
	return data_[row*cols+col];
}

const int& Matrix::operator()(std::size_t row,std::size_t col) const{
	return data_[row*cols+col];
}

Matrix::Matrix(const Matrix& other)
    : rows(other.rows), cols(other.cols), data_(other.data_) {
}

std::ostream& operator<<(std::ostream& os, const Matrix& A) {
    for (std::size_t row = 0; row < A.getRows(); ++row) {
        for (std::size_t col = 0; col < A.getCols(); ++col) {
            os << A(row, col);
            if (col + 1 < A.getCols()) {
                os << ' ';
            }
        }
        if (row + 1 < A.getRows()) {
            os << '\n';
        }
    }
    return os;
}
