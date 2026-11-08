#include "matrix.h"
#include <cstddef>

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
