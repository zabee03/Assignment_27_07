#include "Dessert.h"

Dessert::Dessert(const std::string& name, 
    const std::string& servingTemp, 
    double price, 
    bool isSugarFree)
    : MenuItem(name, servingTemp, price), isSugarFree(isSugarFree) {}

void Dessert::display() const {
    MenuItem::display();
    std::cout << "Sugar Free: " << (isSugarFree ? "Yes" : "No") << "\n";
}