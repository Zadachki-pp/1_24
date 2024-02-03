#include "Cube.hpp"

#include <iostream>
#include <cmath>


// Куб, расчет площади, объема и длины диагонали.
Cube::Cube(double a) {
    std::cout << "Construct" << std::endl;
    _a = a;
}

Cube::~Cube() {
    std::cout << "Destruct" << std::endl;
}

double Cube::get_S() const {
    return std::pow(_a, 2);
}

double Cube::get_V() const {
    return std::pow(_a, 3);
}

double Cube::get_d() const {
    return _a * std::sqrt(3);
}