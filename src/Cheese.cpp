#include "Cheese.hpp"

double Cheese::cost() {
    return m_pizza->cost() + 2.0;
}

std::string Cheese::description() {
    return m_pizza->description() + ", Cheese";
}