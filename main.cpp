#include <iostream>
#include "Cube.hpp"


int main() {
    Cube cubik(5);
    std::cout << cubik.get_S() << std::endl;
    std::cout << cubik.get_V() << std::endl;
    std::cout << cubik.get_d() << std::endl;

    return 0;
}
