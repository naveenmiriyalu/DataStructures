#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <vector>
#include <cstddef>
#include <iosfwd>

class Matrix{

 private:
 	std::size_t rows;
 	std::size_t cols;
	std::vector<int> data_;

 public:
 	Matrix();
 	Matrix(std::size_t rows,std::size_t cols);
	std::size_t getRows() const;
	std::size_t getCols() const;
	int& operator()(std::size_t row,std::size_t col);
	const int& operator()(std::size_t row,std::size_t col) const;
};

std::ostream& operator<<(std::ostream& os, const Matrix& A);
#endif