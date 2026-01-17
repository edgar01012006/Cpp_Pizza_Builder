#include "Margarita.hpp"

void Margarita::description() const {
    std::cout << "Margarita ";
    Pizza::description();
}