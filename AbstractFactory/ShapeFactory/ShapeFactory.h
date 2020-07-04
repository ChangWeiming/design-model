#pragma once

#include "../AbstractFactory/AbstractFactory.h"
#include "../ColorFactory/Color.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include <string>

class ShapeFactory: public AbstractFactory{
public:
    Shape* createShape(std::string shapeName) {
        if(shapeName == "rectangle") {
            return new Rectangle();
        }
        else if (shapeName == "circle") {
            return new Circle();
        }
        else if (shapeName == "square") {
            return new Square();
        }
        else return nullptr;
    }
    Color* createColor(std::string colorName) {
        return nullptr;
    }
};
