#ifndef dessert_h
#define dessert_h
#include "MenuItem.h"

class Dessert : public MenuItem {
private:
    bool isSugarFree;
    
public:
    Dessert(const std::string& name, 
        const std::string& servingTemp, 
        double price, 
        bool isSugarFree);
    void display() const override;
};

#endif