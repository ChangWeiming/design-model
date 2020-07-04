#pragma once

#include "../ShapeFactory/Shape.h"
#include "../ColorFactory/Color.h"
#include <string>

class AbstractFactory {
public:
    virtual Color* createColor(std::string) = 0;
    virtual Shape* createShape(std::string) = 0;
};