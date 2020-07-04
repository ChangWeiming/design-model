#pragma once

#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"
#include <string>

class Factory {
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
};
