// Created by Shalev Ben David.
#include "Fraction.hpp"

// <<<<<<<<<<<<<<<<<< Operator + >>>>>>>>>>>>>>>>>>
Fraction Fraction :: operator + (const Fraction& other) const {
    Fraction temp ((other._numerator * _denominator) + (_numerator * other._denominator),
                   _denominator * other._denominator);
    temp.reduce();
    return temp;
}
Fraction Fraction :: operator + (const float& other) const {
    return Fraction(1, 2);
}

// <<<<<<<<<<<<<<<<<< Operator - >>>>>>>>>>>>>>>>>>
Fraction Fraction ::operator - (const Fraction& other) const {
    Fraction temp (-(other._numerator * _denominator) + (_numerator * other._denominator),
                   _denominator * other._denominator);
    temp.reduce();
    return temp;
}
Fraction Fraction :: operator - (const float& other) const {
    return Fraction(1, 2);
}

// <<<<<<<<<<<<<<<<<< Operator / >>>>>>>>>>>>>>>>>>
Fraction Fraction :: operator / (const Fraction& other) const {
    Fraction temp (_numerator * other._denominator,
                   _denominator * other._numerator);
    temp.reduce();
    return temp;
}
Fraction Fraction :: operator / (const float& other) const {
    return Fraction(1, 2);
}

// <<<<<<<<<<<<<<<<<< Operator * >>>>>>>>>>>>>>>>>>
Fraction Fraction :: operator * (const Fraction& other) const {
    Fraction temp (_numerator * other._numerator,
                   _denominator * other._denominator);
    temp.reduce();
    return temp;
}
Fraction Fraction :: operator * (const float& other) const {
    return Fraction(1, 2);
}

/**
 *
 * @param numerator
 * @param denominator
 * @return the gcd of the numerator and denominator
 */
int gcd(int numerator, int denominator) {
    if (!numerator) { return denominator; }
    if (!denominator) { return numerator; }
    while (denominator) {
        int r = numerator % denominator;
        numerator = denominator;
        denominator = r;
    }
    return numerator;
}

/**
 * Reduces a fraction before returning it.
 */
void Fraction:: reduce () {
    int save_gcd = gcd(this -> getNumerator(), this -> getDenominator());
    this -> getNumerator() /= save_gcd;
    this -> getDenominator() /= save_gcd;
}