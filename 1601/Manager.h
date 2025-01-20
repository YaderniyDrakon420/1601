#pragma once
#ifndef MANAGER_H
#define MANAGER_H

#include "Employer.h"

class Manager : public Employer {
public:
    void Print() const override {
        std::cout << "I am the Manager." << std::endl;
    }
};

#endif 
