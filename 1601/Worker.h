#pragma once

#ifndef WORKER_H
#define WORKER_H

#include "Employer.h"

class Worker : public Employer {
public:
    void Print() const override {
        std::cout << "I am a Worker." << std::endl;
    }
};

#endif 
