#include "matrix.h"
#include <cassert>
#include <sstream>

int main() {
    Matrix a(2, 3);
    a(0, 0) = 10;
    a(1, 2) = 90;

    const Matrix& original = a;
    Matrix b(original);
    assert(b.getRows() == 2 && b.getCols() == 3);
    assert(b(0, 0) == 10 && b(1, 2) == 90);

    b(0, 0) = 99;
    assert(a(0, 0) == 10);

    a(1, 2) = 12;
    assert(b(1, 2) == 90);

    Matrix empty;
    Matrix copy_empty(empty);
    assert(copy_empty.getRows() == 0 && copy_empty.getCols() == 0);

    std::ostringstream out;
    out << b;
    assert(out.str() == "99 0 0\n0 0 90");
}
