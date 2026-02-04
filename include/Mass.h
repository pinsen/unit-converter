#ifndef MASS_H
#define MASS_H

#include "Converter.h"
#include <iostream>
#include <string>
#include <map>
class Mass:public Converter{
public:
    double toBase(double value, std::string unit) override;

    double fromBase(double baseValue, std::string targetUnit) override;
};
#endif