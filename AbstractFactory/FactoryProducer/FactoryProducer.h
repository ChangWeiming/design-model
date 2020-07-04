#pragma once

#include "../AbstractFactory/AbstractFactory.h"
#include "../ColorFactory/ColorFactory.h"
#include "../ShapeFactory/ShapeFactory.h"
#include <string>

class FactoryProducer {
public:
    AbstractFactory* getFactory(std::string factoryName) {
        if(factoryName == "color") return new ColorFactory();
        else if(factoryName == "shape") return new ShapeFactory();
        return nullptr;
    }
};