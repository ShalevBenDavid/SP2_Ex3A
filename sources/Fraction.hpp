// Created by Shalev Ben David.

#ifndef SP2_EX3A_FRACTION_H
#define SP2_EX3A_FRACTION_H
#include <iostream>

namespace ariel {}
    class Fraction {
        // Private attributes.
        int _numerator; // Numerator.
        int _denominator; // Denominator.

    public:
        // Constructor.
        Fraction(int numerator, int denominator) : _numerator(numerator), _denominator(denominator) {}

        // Operator methods.
        friend std::ostream &operator << (std::ostream &output, const Fraction &frac) {
            output << frac._numerator << '/' << frac._denominator;
            return output;
        }

        // Arithmetic operators methods.
        Fraction operator + (const Fraction &other) const;
        Fraction operator + (const float &other) const;
        friend Fraction operator + (const float& left, const Fraction& right) {
            return Fraction(1, 2);
        }
        Fraction operator - (const Fraction &other) const;
        Fraction operator - (const float &other) const;
        friend Fraction operator - (const float& left, const Fraction& right) {
            return Fraction(1, 2);
        }
        Fraction operator / (const Fraction &other) const;
        Fraction operator / (const float &other) const;
        friend Fraction operator / (const float& left, const Fraction& right) {
            return Fraction(1, 2);
        }
        Fraction operator * (const Fraction &other) const;
        Fraction operator * (const float &other) const;
        friend Fraction operator * (const float& left, const Fraction& right) {
            return Fraction(1, 2);
        }

        // Prefix increment (++n).
        Fraction &operator++() {
            _numerator += _denominator;
            return *this;
        }

        // Prefix decrement (--n).
        Fraction &operator--() {
            _numerator -= _denominator;
            return *this;
        }

        // Postfix increment (n++).
        Fraction operator++(int dont_care) {
            Fraction copy(*this);
            _numerator += _denominator;
            return copy;
        }

        // Postfix decrement (--n).
        Fraction operator--(int dont_care) {
            Fraction copy(*this);
            _numerator -= _denominator;
            return copy;
        }
        // Compare operators.
        friend bool operator == (const Fraction& left, const Fraction& right) { return true; }
        friend bool operator == (const float& left, const Fraction& right) { return true; }
        friend bool operator == (const Fraction& left, const float& right) { return true; }
        friend bool operator <= (const Fraction& left, const Fraction& right) { return true; }
        friend bool operator <= (const float& left, const Fraction& right) { return true; }
        friend bool operator <= (const Fraction& left, const float& right) { return true; }
        friend bool operator >= (const Fraction& left, const Fraction& right) { return true; }
        friend bool operator >= (const float& left, const Fraction& right) { return true; }
        friend bool operator >= (const Fraction& left, const float& right) { return true; }
        friend bool operator > (const Fraction& left, const Fraction& right) { return true; }
        friend bool operator > (const float& left, const Fraction& right) { return true; }
        friend bool operator > (const Fraction& left, const float& right) { return true; }
        friend bool operator < (const Fraction& left, const Fraction& right) { return true; }
        friend bool operator < (const float& left, const Fraction& right) { return true; }
        friend bool operator < (const Fraction& left, const float& right) { return true; }

        // Get methods.
        int& getNumerator() { return _numerator; }

        int& getDenominator() { return _denominator; }

        // Methods
        void reduce ();
    };

#endif //SP2_EX3A_FRACTION_H