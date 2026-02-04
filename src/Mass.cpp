#include "Mass.h"
#include <iostream>

double Mass::toBase(double value, std::string unit){
    if(unit=="kg")return value;
    if(unit=="g")return value/1000.0;
    if(unit=="lb")return value*0.453592;
    if(unit=="ton")return value*1000.0;
    std::cerr << "Error: Unit not found\n";
    return 0.0; 
}

double Mass::fromBase(double baseValue, std::string targetUnit) {
    if(targetUnit=="kg")return baseValue;
    if(targetUnit=="g")return baseValue*1000.0;
    if(targetUnit=="lb")return baseValue/0.453592;
    if(targetUnit=="ton")return baseValue/1000.0;
    std::cerr << "Error: Unit not found\n";
    return 0.0; // Error
}