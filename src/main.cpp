#include "Cheese.hpp"
#include "ExtraSauce.hpp"
#include "Margarita.hpp"
#include "Pepperoni.hpp"
#include "Pizza.hpp"
#include "Topping.hpp"

#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<Pizza> myPizza =
        std::make_unique<ExtraSauce>(
                std::make_unique<Cheese>(
                    std::make_unique<Margarita>()
                )
    );
    
    std::cout << "Pizza Description: " << myPizza->description() << "\n";
    std::cout << "Total Cost: $" << myPizza->cost() << "\n";
}