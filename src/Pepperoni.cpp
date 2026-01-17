#include "Pepperoni.hpp"

void Pepperoni::description() const {
    std::cout << "Pepperoni ";
    Pizza::description();
}