#pragma once

#include "Color.h"
#include <iostream>

class Blue: public Color {
public:
    void fill() override {
       std::cout << "filled Blue color!\n";
    }
};