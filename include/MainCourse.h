#ifndef maincourse_h
#define maincourse_h
#include "MenuItem.h"

class MainCourse : public MenuItem {
private:
    std::string sideDish;

public:
    MainCourse(const std::string& name, 
        const std::string& servingTemp, 
        double price, 
        const std::string& sideDish);
    void display() const override;
};

#endif