#include <iostream>
#include <cmath>


// Куб, расчет площади, объема и длины диагонали.
class Cube {
    double _a;

public:
    explicit Cube(double a) {
        _a = a;
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


int main() {
    Cube cubik(5);
    std::cout << cubik.get_S() << std::endl;
    std::cout << cubik.get_V() << std::endl;
    std::cout << cubik.get_d() << std::endl;

    return 0;
}
