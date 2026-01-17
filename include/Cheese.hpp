#ifndef CHEESE_HPP
#define CHEESE_HPP

#include <iostream>

#include "Topping.hpp"

class Cheese : public Topping {
    public:
        using Topping::Topping;

        void addCost() override;

        void addDescription() override;
};

#endif