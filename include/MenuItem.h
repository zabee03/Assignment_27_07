#ifndef menuitem_h
#define menuitem_h
#include <string>
#include <iostream>

class MenuItem {
private:
    std::string name;
    std::string servingTemp;
    double price;

public:
    MenuItem(const std::string& name, const std::string& servingTemp, double price);
    virtual void display() const;
    virtual ~MenuItem() = default;
};

#endif