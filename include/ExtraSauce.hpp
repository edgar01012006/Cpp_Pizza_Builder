#ifndef EXTRASAUCE_HPP
#define EXTRASAUCE_HPP

#include "Topping.hpp"

class ExtraSauce : public Topping {
    public:
        using Topping::Topping;

        double cost() override;

        std::string description() override;
};

#endif