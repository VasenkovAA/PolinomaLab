// Copyright 2023 VasenkovAA
#ifndef MONOMS_H_
#define MONOMS_H_

#include <iostream>
#include <vector>
#include "../TFraction/TFroction.h"

template <typename T>
class TVarible
{
private:
    T variable;
    Fraction degree;
public:
    TVarible(T var, Fraction deg) : variable(var), degree(deg) {}
    TVarible(const TVarible& other) : variable(other.variable), degree(other.degree) {}
    void setVariable(T var) {
        variable = var;
    }
    void setDegree(Fraction deg) {
        degree = deg;
    }
    T getVariable() const {
        return variable;
    }
    Fraction getDegree() const {
        return degree;
    }

    bool operator!=(const TVarible& other) const {
        return !(*this == other);
    }
    bool operator<(const TVarible& other) const {
        return degree < other.degree || (degree == other.degree && variable < other.variable);
    }
    bool operator==(const TVarible& other) const {
        return variable == other.variable && degree == other.degree;
    }
    bool operator>(const TVarible& other) const {
        return ((degree > other.degree) || (degree == other.degree && variable > other.variable));
    }
    bool operator>=(const TVarible& other) const {
        return (*this > other) || (*this == other);
    }
    bool operator<=(const TVarible& other) const {
        return !(*this > other);
    }
    float run() const {
        return pow(variable, degree.run());
    }
};

template<typename T>
Fraction pow(const T& base, const Fraction& exponent) {
    double result = pow(static_cast<double>(base), static_cast<double>(exponent.run()));
    int new_numerator = static_cast<int>(result * exponent.getDenominator());
    int new_denominator = exponent.getDenominator();
    char new_sign = (result >= 0) ? '+' : '-';
    return Fraction(new_sign, abs(new_numerator), new_denominator);
}

//template<typename T>
//class TMonom {
//    vector<TVarible> var;
//    float coof;
//
//}


#endif //MONOMS_H_