#pragma once

#include "Color.h"
#include <iostream>

class Green: public Color {
public:
    void fill() override {
       std::cout << "filled Green color!\n";
    }
};