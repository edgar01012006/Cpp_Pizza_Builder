#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <iostream>
#include <vector>
#include <string>

class Pizza {
    private:
        double m_price;
        std::vector<std::string> m_toppingDescriptions;

    public:  
        void addDescription(const std::string& topping);
        virtual void description() const;

        void addCost(double price);
        double cost() { return m_price; }
};

#endif