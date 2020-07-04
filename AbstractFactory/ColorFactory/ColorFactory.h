#pragma once

#include "../AbstractFactory/AbstractFactory.h"
#include "../ShapeFactory/Shape.h"
#include "Color.h"
#include "Green.h"
#include "Red.h"
#include "Blue.h"
#include <string>

class ColorFactory: public AbstractFactory {
public:
    Color* createColor(std::string colorName) {
        if(colorName == "red") return new Red();
        else if(colorName == "green") return new Green();
        else if(colorName == "blue") return new Blue();
        else return nullptr;
    }
    Shape* createShape(std::string shapeName) {
        return nullptr;
    }
};