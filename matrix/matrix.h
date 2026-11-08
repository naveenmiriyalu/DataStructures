#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <vector>

class Matrix{

 private:
 	size_t rows;
 	size_t cols;
	std::vector<int> data_;

 public:
 	Matrix();
	size_t getRows() const;
	size_t getCols() const;
};
#endif
