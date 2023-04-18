// Created by Shalev Ben David.

#ifndef SP2_EX3A_FRACTION_H
#define SP2_EX3A_FRACTION_H
#include <iostream>

namespace ariel {
    class Fraction {
        // Private attributes.
        int _numerator; // Numerator.
        int _denominator; // Denominator.

    public:
        // Constructors.
        Fraction (int numerator = 1, int denominator = 1) : _numerator(numerator), _denominator(denominator) {}
        Fraction (Fraction const &copy) : _numerator(copy._numerator), _denominator(copy._denominator) {}
        Fraction (float num) : _numerator(num * 1000), _denominator(1000) {}

        // Stream operators.
        // <<<<<<<<<<<<<<<<<< Operator << >>>>>>>>>>>>>>>>>>
        friend std::ostream& operator << (std::ostream& output, const Fraction& frac) {
            Fraction temp(frac._numerator, frac._denominator);
            temp.reduce();
            output << temp._numerator << '/' << temp._denominator;
            return output;
        }
        // <<<<<<<<<<<<<<<<<< Operator >> >>>>>>>>>>>>>>>>>>
        friend std::istream& operator >> (std::istream& input, const Fraction& frac) {
            return input;
        }

        // Arithmetic operators.
        // <<<<<<<<<<<<<<<<<< Operator + >>>>>>>>>>>>>>>>>>
        Fraction operator + (const Fraction& other) const;
        Fraction operator + (const float& other) const;
        friend Fraction operator + (const float& left, const Fraction& right) {
            Fraction temp (left);
            temp = temp + right;
            temp.reduce();
            return temp;
        }

        // <<<<<<<<<<<<<<<<<< Operator - >>>>>>>>>>>>>>>>>>
        Fraction operator - (const Fraction& other) const;
        Fraction operator - (const float& other) const;
        friend Fraction operator - (const float& left, const Fraction& right) {
            Fraction temp (left);
            temp = temp - right;
            temp.reduce();
            return temp;
        }

        // <<<<<<<<<<<<<<<<<< Operator / >>>>>>>>>>>>>>>>>>
        Fraction operator / (const Fraction& other) const;
        Fraction operator / (const float& other) const;
        friend Fraction operator / (const float& left, const Fraction& right) {
            Fraction temp (left);
            temp = temp / right;
            temp.reduce();
            return temp;
        }

        // <<<<<<<<<<<<<<<<<< Operator * >>>>>>>>>>>>>>>>>>
        Fraction operator * (const Fraction& other) const;
        Fraction operator * (const float& other) const;
        friend Fraction operator * (const float& left, const Fraction& right) {
            Fraction temp (left);
            temp = temp * right;
            temp.reduce();
            return temp;
        }

        // Prefix increment (++n).
        Fraction& operator ++ ();
        // Prefix decrement (--n).
        Fraction& operator -- ();
        // Postfix increment (n++).
        Fraction operator ++ (int dont_care);
        // Postfix decrement (--n).
        Fraction operator -- (int dont_care);

        // Compare operators.
        // <<<<<<<<<<<<<<<<<< Operator = >>>>>>>>>>>>>>>>>>
        friend bool operator == (const Fraction &left, const Fraction &right) { return true; }
        friend bool operator == (const float &left, const Fraction &right) { return true; }
        friend bool operator == (const Fraction &left, const float &right) { return true; }

        // <<<<<<<<<<<<<<<<<< Operator <= >>>>>>>>>>>>>>>>>>
        friend bool operator <= (const Fraction &left, const Fraction &right) { return true; }
        friend bool operator <= (const float &left, const Fraction &right) { return true; }
        friend bool operator <= (const Fraction &left, const float &right) { return true; }

        // <<<<<<<<<<<<<<<<<< Operator >= >>>>>>>>>>>>>>>>>>
        friend bool operator >= (const Fraction &left, const Fraction &right) { return true; }
        friend bool operator >= (const float &left, const Fraction &right) { return true; }
        friend bool operator >= (const Fraction &left, const float &right) { return true; }

        // <<<<<<<<<<<<<<<<<< Operator > >>>>>>>>>>>>>>>>>>
        friend bool operator > (const Fraction &left, const Fraction &right) { return true; }
        friend bool operator > (const float &left, const Fraction &right) { return true; }
        friend bool operator > (const Fraction &left, const float &right) { return true; }

        // <<<<<<<<<<<<<<<<<< Operator < >>>>>>>>>>>>>>>>>>
        friend bool operator < (const Fraction &left, const Fraction &right) { return true; }
        friend bool operator < (const float &left, const Fraction &right) { return true; }
        friend bool operator < (const Fraction &left, const float &right) { return true; }

        // Get methods.
        int& getNumerator() { return _numerator; }
        int& getDenominator() { return _denominator; }

        // Methods
        void reduce();
    };
}

#endif //SP2_EX3A_FRACTION_H