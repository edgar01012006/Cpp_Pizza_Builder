#include "Pizza.hpp"

void Pizza::addDescription(const std::string& topping) {
    m_toppingDescriptions.emplace_back(topping);
}

void Pizza::description() const {
    for (size_t i = 0; i < m_toppingDescriptions.size(); ++i) {
        std::cout << m_toppingDescriptions[i] << " ";
    }
    std::cout << std::endl;
}

void Pizza::addCost(double price) {
    m_price += price;
}
