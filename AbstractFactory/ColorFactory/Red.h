#pragma once

#include "Color.h"
#include <iostream>

class Red: public Color {
public:
    void fill() override {
       std::cout << "filled Red color!\n"; 
    }
};