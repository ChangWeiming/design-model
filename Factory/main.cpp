#include "factory.h"
#include "shape.h"


int main() {
    auto fac = new Factory();

    auto circle = fac->createShape("circle");
    circle->draw();

    auto rec = fac->createShape("rectangle");
    rec->draw();
    
    auto square = fac->createShape("square");
    square->draw();

}