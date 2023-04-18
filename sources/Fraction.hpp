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
        // Constructors.
        Fraction (int numerator = 1, int denominator = 1) : _numerator(numerator), _denominator(denominator) {}
        Fraction (float num) : _numerator(num * 1000),  _denominator(1000) {}

        // Stream operators.
        // <<<<<<<<<<<<<<<<<< Operator << >>>>>>>>>>>>>>>>>>
        friend std::ostream& operator << (std::ostream &output, const Fraction &frac) {
            output << frac._numerator << '/' << frac._denominator;
            return output;
        }
        // <<<<<<<<<<<<<<<<<< Operator >> >>>>>>>>>>>>>>>>>>
        friend std::istream& operator >> (std::istream &output, inpu Fraction &frac) {
            output << frac._numerator << '/' << frac._denominator;
            return output;
        }

        // Arithmetic operators.
        // <<<<<<<<<<<<<<<<<< Operator + >>>>>>>>>>>>>>>>>>
        Fraction operator + (const Fraction &other) const;
        Fraction operator + (const float &other) const;
        friend Fraction operator + (const float& left, const Fraction& right) {
            return Fraction(1, 2);
        }
        // <<<<<<<<<<<<<<<<<< Operator - >>>>>>>>>>>>>>>>>>
        Fraction operator - (const Fraction &other) const;
        Fraction operator - (const float &other) const;
        friend Fraction operator - (const float& left, const Fraction& right) {
            return Fraction(1, 2);
        }
        // <<<<<<<<<<<<<<<<<< Operator / >>>>>>>>>>>>>>>>>>
        Fraction operator / (const Fraction &other) const;
        Fraction operator / (const float &other) const;
        friend Fraction operator / (const float& left, const Fraction& right) {
            return Fraction(1, 2);
        }
        // <<<<<<<<<<<<<<<<<< Operator * >>>>>>>>>>>>>>>>>>
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
        // <<<<<<<<<<<<<<<<<< Operator = >>>>>>>>>>>>>>>>>>
        friend bool operator == (const Fraction& left, const Fraction& right) { return true; }
        friend bool operator == (const float& left, const Fraction& right) { return true; }
        friend bool operator == (const Fraction& left, const float& right) { return true; }
        // <<<<<<<<<<<<<<<<<< Operator <= >>>>>>>>>>>>>>>>>>
        friend bool operator <= (const Fraction& left, const Fraction& right) { return true; }
        friend bool operator <= (const float& left, const Fraction& right) { return true; }
        friend bool operator <= (const Fraction& left, const float& right) { return true; }
        // <<<<<<<<<<<<<<<<<< Operator >= >>>>>>>>>>>>>>>>>>
        friend bool operator >= (const Fraction& left, const Fraction& right) { return true; }
        friend bool operator >= (const float& left, const Fraction& right) { return true; }
        friend bool operator >= (const Fraction& left, const float& right) { return true; }
        // <<<<<<<<<<<<<<<<<< Operator > >>>>>>>>>>>>>>>>>>
        friend bool operator > (const Fraction& left, const Fraction& right) { return true; }
        friend bool operator > (const float& left, const Fraction& right) { return true; }
        friend bool operator > (const Fraction& left, const float& right) { return true; }
        // <<<<<<<<<<<<<<<<<< Operator < >>>>>>>>>>>>>>>>>>
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