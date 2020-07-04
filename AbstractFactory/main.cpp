#include "FactoryProducer/FactoryProducer.h"
#include <iostream>

int main() {
    auto FP = new FactoryProducer();
    auto shape = FP->getFactory("shape");
    auto color = FP->getFactory("color");
    // std::cout << shape << color << std::endl;
    
    auto circle = shape->createShape("circle");
    circle->draw();
    auto rec = shape->createShape("rectangle");
    rec->draw();
    auto square = shape->createShape("square");
    square->draw();

    auto red = color->createColor("red");
    red->fill();
    auto blue = color->createColor("blue");
    blue->fill();
    auto green = color->createColor("green");
    green->fill();

    return 0;

}