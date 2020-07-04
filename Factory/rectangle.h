#pragma once

#include "shape.h"
#include <iostream>

class Rectangle : public Shape{
public:
    virtual void draw() {
        std::cout << "in rectangle draw\n";
    }
};