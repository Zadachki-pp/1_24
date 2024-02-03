#include "Cude.h"
#include <iostream>
#include <cmath>


// Куб, расчет площади, объема и длины диагонали.
class Cube {
    double _a;

public:
    explicit Cube::Cube(double a) {
        std::cout << "Construct" << std::endl;
        _a = a;
    }

    ~Cube() {
        std::cout << "Destruct" << std::endl;
    }

    double get_S() const {
        return std::pow(_a, 2);
    }

    double get_V() const {
        return std::pow(_a, 3);
    }

    double get_d() const {
        return _a * std::sqrt(3);
    }

};