#pragma once

#include "shape.h"
#include <iostream>

class Square : public Shape{
public:
    virtual void draw() {
        std::cout << "in square draw\n";
    }
};