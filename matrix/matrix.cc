#include "matrix.h"

Matrix::Matrix(): rows(0),cols(0){
}

size_t Matrix::getRows() const {
	return rows;
}

size_t Matrix::getCols() const {
	return cols;
}
