#include <iostream>
#include <vector>
#include "Appetizer.h"
#include "MainCourse.h"
#include "Dessert.h"

int main() {
    std::vector<MenuItem*> menu;
    menu.push_back(new Appetizer("Chicken Rolls", "hot", 1.20, true));
    menu.push_back(new Appetizer("Simple Potato Pancakes", "cold", 0.90, false));
    menu.push_back(new Appetizer("Mexican Salad", "cold", 1.10, true));
    menu.push_back(new MainCourse("Grilled Chicken", "hot", 2.50, "Mashed Potatoes"));
    menu.push_back(new MainCourse("Pasta Alfredo", "hot", 2.00, "Garlic Bread"));
    menu.push_back(new MainCourse("Veg Biryani", "hot", 1.80, "Raita"));
    menu.push_back(new MainCourse("Paneer Butter Masala", "hot", 2.10, "Butter Naan"));
    menu.push_back(new Dessert("Cheesecake", "cold", 1.50, false));
    menu.push_back(new Dessert("Fruit Salad", "cold", 1.00, true));
    menu.push_back(new Dessert("Gulab Jamun", "hot", 0.60, false));
    
    std::cout << "                                             \n\n";
    std::cout << "-------------- Party Menu -------------------\n\n";
    for (auto item : menu) {
        item->display();
        std::cout << std::endl;
    }

    for (auto item : menu) {
        delete item;
    }
    return 0;
}
