#pragma once
#ifndef EMPLOYER_H
#define EMPLOYER_H

#include <iostream>

class Employer {
public:
    virtual void Print() const = 0;

    virtual ~Employer() {}
};

#endif 

