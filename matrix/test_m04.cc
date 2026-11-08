#include "matrix.h"
#include <cassert>
#include <sstream>

int main() {
    Matrix a(2, 3);
    a(0, 0) = 10;
    a(0, 1) = 20;
    a(1, 2) = 50;

    std::ostringstream output;
    output << a;
    assert(output.str() == "10 20 0\n0 0 50");

    std::ostringstream chained;
    chained << "Matrix:\n" << a << " END";
    assert(chained.str() == "Matrix:\n10 20 0\n0 0 50 END");

    const Matrix& read_only = a;
    std::ostringstream const_output;
    const_output << read_only;
    assert(const_output.str() == output.str());

    Matrix single(1, 1);
    single(0, 0) = 8;
    std::ostringstream single_output;
    single_output << single;
    assert(single_output.str() == "8");

    Matrix empty;
    std::ostringstream empty_output;
    empty_output << empty;
    assert(empty_output.str().empty());
}
