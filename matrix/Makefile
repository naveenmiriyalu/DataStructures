CXX= g++
CXXFLAGS= -Wall -std=c++23 -Wall -Wpedantic  -g
run_matrix:	main.cc matrix.h matrix.cc
	${CXX} ${CXXFLAGS} -o run_matrix matrix.cc main.cc
run: run_matrix
	./run_matrix
clean:
	rm -rf run_matrix
