#ifndef MARGARITA_HPP
#define MARGARITA_HPP

#include "Pizza.hpp"

class Margarita : public Pizza {
    public:
        using Pizza::Pizza;

        void description() const override;

};  

#endif