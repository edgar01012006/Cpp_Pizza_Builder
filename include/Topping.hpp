#ifndef TOPPING_HPP
#define TOPPING_HPP

#include <iostream>
#include <string>
#include <memory>

#include "Pizza.hpp"

class Topping : public Pizza {
    protected:
        std::unique_ptr<Pizza> m_pizza;

    public:
        Topping(std::unique_ptr<Pizza> pizza) : m_pizza { std::move(pizza) } {}

};

#endif