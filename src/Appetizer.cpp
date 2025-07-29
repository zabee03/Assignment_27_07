#include "Appetizer.h"

Appetizer::Appetizer(const std::string& name, 
    const std::string& servingTemp, 
    double price, 
    bool dipIncluded)
    : MenuItem(name, servingTemp, price), dipIncluded(dipIncluded) {}

void Appetizer::display() const {
    MenuItem::display();
    std::cout << "Dip Included: " << (dipIncluded ? "Yes" : "No") << "\n";
}
