#ifndef TOPPING_HPP
#define TOPPING_HPP

#include <string>
#include <memory>

#include "Pizza.hpp"

class Topping {
    protected:
        std::unique_ptr<Pizza> m_pizza;

    public:
        Topping(std::unique_ptr<Pizza> pizza) : m_pizza { std::move(pizza) } {}

        virtual void addCost() = 0;

        virtual void addDescription() = 0;
};

#endif