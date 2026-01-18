#ifndef PEPPERONI_HPP
#define PEPPERONI_HPP

#include "Pizza.hpp"

class Pepperoni : public Pizza {
    public:
        using Pizza::Pizza;

        double cost() override;

        std::string description() override;
};

#endif