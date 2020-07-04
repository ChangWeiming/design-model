#pragma once

#include "Shape.h"
#include <iostream>

class Circle : public Shape{
public:
    virtual void draw() {
        std::cout << "in circle draw\n";
    }
};