#ifndef PEPPERONI_HPP
#define PEPPERONI_HPP

#include "Pizza.hpp"

class Pepperoni : public Pizza {
    public:
        using Pizza::Pizza;

        void description() const override;
};

#endif