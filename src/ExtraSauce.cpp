#include "ExtraSauce.hpp"

double ExtraSauce::cost() {
    return m_pizza->cost() + 0.5;
}

std::string ExtraSauce::description() {
    return m_pizza->description() + ", ExtraSauce";
}