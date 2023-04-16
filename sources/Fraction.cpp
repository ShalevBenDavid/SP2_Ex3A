// Created by Shalev Ben David.
#include "Fraction.hpp"

ostream& Fraction :: operator << (ostream& output, const Fraction& frac) {
    return (output << frac._numerator << '/' <<  frac._denominator);
}
Fraction Fraction :: operator + (const Fraction& other) const {
    return Fraction((other._numerator * _denominator) + (_numerator * other._denominator), _denominator * other._denominator);
}
Fraction Fraction :: operator + (const float& other) const {
    return Fraction(1, 2);
}
Fraction Fraction ::operator - (const Fraction& other) const {
    return Fraction(-(other._numerator * _denominator) + (_numerator * other._denominator), _denominator * other._denominator);
}
Fraction Fraction :: operator - (const float& other) const {
    return Fraction(1, 2);
}
Fraction Fraction :: operator / (const Fraction& other) const {
    return Fraction(_numerator * other._denominator, _denominator * other._numerator);
}
Fraction Fraction :: operator / (const float& other) const {
    return Fraction(1, 2);
}
Fraction Fraction :: operator * (const Fraction& other) const {
    return Fraction(_numerator * other._numerator, _denominator * other._denominator);
}
Fraction Fraction :: operator * (const float& other) const {
    return Fraction(1, 2);
}