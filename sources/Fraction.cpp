// Created by Shalev Ben David.
#include "Fraction.hpp"

Fraction Fraction :: operator + (const Fraction& other) const {
    Fraction temp ((other._numerator * _denominator) + (_numerator * other._denominator), _denominator * other._denominator);
    temp.reduce();
    return temp;
}
Fraction Fraction :: operator + (const float& other) const {
    return Fraction(1, 2);
}
Fraction Fraction ::operator - (const Fraction& other) const {
    Fraction temp (-(other._numerator * _denominator) + (_numerator * other._denominator), _denominator * other._denominator);
    temp.reduce();
    return temp;
}
Fraction Fraction :: operator - (const float& other) const {
    return Fraction(1, 2);
}
Fraction Fraction :: operator / (const Fraction& other) const {
    Fraction temp (_numerator * other._denominator, _denominator * other._numerator);
    temp.reduce();
    return temp;
}
Fraction Fraction :: operator / (const float& other) const {
    return Fraction(1, 2);
}
Fraction Fraction :: operator * (const Fraction& other) const {
    Fraction temp (_numerator * other._numerator, _denominator * other._denominator);
    temp.reduce();
    return temp;
}
Fraction Fraction :: operator * (const float& other) const {
    return Fraction(1, 2);
}

int gcd(int numerator, int denominator) {
    if (denominator == 0) {
        return numerator;
    }
    return gcd(denominator, (int) numerator % denominator);
}

void Fraction:: reduce () {
    int g = gcd(this -> getNumerator(), this -> getDenominator());
    this -> getNumerator() /= g;
    this -> getDenominator() /= g;
}