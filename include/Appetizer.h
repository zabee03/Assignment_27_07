#ifndef appetizer_h
#define appetizer_h
#include "MenuItem.h"

class Appetizer : public MenuItem {
private:
    bool dipIncluded;

public:
    Appetizer(const std::string& name, 
        const std::string& servingTemp, 
        double price, 
        bool dipIncluded);
    void display() const override;
};

#endif