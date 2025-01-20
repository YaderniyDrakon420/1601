#pragma once
#ifndef PRESIDENT_H
#define PRESIDENT_H

#include "Employer.h"

class President : public Employer {
public:
    void Print() const override {
        std::cout << "I am the President." << std::endl;
    }
};

#endif 

