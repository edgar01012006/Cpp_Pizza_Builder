#ifndef EXTRASAUCE_HPP
#define EXTRASAUCE_HPP

#include <iostream>

#include "Topping.hpp"

class ExtraSauce : public Topping {
    public:
        using Topping::Topping;

        void addCost() override;

        void addDescription() override;
};

#endif