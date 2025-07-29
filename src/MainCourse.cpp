#include "MainCourse.h"

MainCourse::MainCourse(const std::string& name, 
    const std::string& servingTemp, 
    double price, 
    const std::string& sideDish)
    : MenuItem(name, servingTemp, price), sideDish(sideDish) {}

void MainCourse::display() const {
    MenuItem::display();
    std::cout << "Side Dish: " << sideDish << "\n";
}