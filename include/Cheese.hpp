#ifndef CHEESE_HPP
#define CHEESE_HPP

#include "Topping.hpp"

class Cheese : public Topping {
    public:
        using Topping::Topping;

        double cost() override;

        std::string description() override;
};

#endif