# 🍕 Pizza Builder

## 1. Project Overview

The **Pizza Builder** is a C++ application that implements the **Decorator Design Pattern** to create highly customizable pizza orders.

The project demonstrates how behavior can be dynamically extended at runtime by wrapping objects with decorators, allowing flexible composition of features without changing existing code.

---

## 2. Features

### Pizza Components
- **Base Pizzas**: Margarita, Pepperoni
- **Toppings**: Cheese, ExtraSauce

### Decorator Behavior
- **Recursive Calculation**: The total cost and ingredient list are calculated dynamically as calls bubble up from the base pizza through the decorator layers.
- **Dynamic Composition**: Toppings are wrapped at runtime using `std::unique_ptr`, ensuring flexible and memory-safe object construction.
- **Pure Interface**: The system relies on the `Pizza` interface, so the main application does not depend on concrete pizza or topping implementations.

---

## 3. Project Structure

```text
cpp_pizza_builder/
├── include/                 # Header files (.hpp)
│   ├── Pizza.hpp            # Abstract base interface
│   ├── Topping.hpp          # Abstract decorator class
│   ├── Margarita.hpp
│   ├── Pepperoni.hpp
│   ├── Cheese.hpp
│   └── ExtraSauce.hpp
├── src/                     # Implementation files (.cpp)
│   ├── Pizza.cpp
│   ├── Margarita.cpp
│   ├── Pepperoni.cpp
│   ├── Cheese.cpp
│   ├── ExtraSauce.cpp
│   └── main.cpp
├── Makefile                 # Cross-platform build script
└── README.md                # Project documentation
```

---

## 4. Build & Run Instructions

### Build the Project
```bash
make
```

### Run the Program
```bash
./PizzaBuilder
```

### Clean Compiled Files
```bash
make clean
```
