#include "MenuItem.h"
#include <iomanip>

MenuItem::MenuItem(const std::string& name, const std::string& servingTemp, double price)
    : name(name), servingTemp(servingTemp), price(price) {}

void MenuItem::display() const {
    std::cout << "Dish: " << name << "\n";
    std::cout << "Temperature: " << servingTemp << "\n";
    std::cout << "Price: $" << std::fixed << std::setprecision(2) << price << "\n";
}