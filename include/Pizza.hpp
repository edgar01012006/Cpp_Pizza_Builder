#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <iostream>
#include <vector>
#include <string>

class Pizza {
    public:  
        virtual ~Pizza() = default;

        virtual std::string description() = 0;

        virtual double cost() = 0;
};

#endif