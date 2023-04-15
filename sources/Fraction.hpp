// Created by Shalev Ben David.

#ifndef SP2_EX3A_FRACTION_H
#define SP2_EX3A_FRACTION_H

namespace ariel {
    class Fraction {
        // Private attributes.
        int _a; // Numerator.
        int _b; // Denominator.

    public:
        // Constructor.
        Fraction(int a, int b) : _a(a), _b(b) {}

        // Operator methods.
        ostream& operator << (ostream& output, const Fraction& frac) { return (output << frac._a << '/' <<  frac._b); }
        Fraction operator + (const Fraction& other) const { return this; }
        Fraction operator + (const float& other) const { return this; }
        Fraction operator - (const Fraction& other) const { return this; }
        Fraction operator - (const float& other) const { return this; }
        Fraction operator / (const Fraction& other) const { return this; }
        Fraction operator / (const float& other) const { return this; }
        Fraction operator * (const Fraction& other) const { return this; }
        Fraction operator * (const float& other) const { return this; }
        // Prefix increment (++n).
        Fraction& operator++() { return *this; }
        // Prefix decrement (--n).
        Fraction& operator--() { return *this; }
        // Postfix increment (n++).
        Fraction operator++(int dont_care) { return this; }
        // Postfix decrement (--n).
        Fraction operator--(int dont_care) { return this; }
        // Compare operators.
        bool operator == (const Fraction& left, const Fraction& right) { return true; }
        bool operator == (const float& left, const Fraction& right) { return true; }
        bool operator == (const Fraction& left, const float& right) { return true; }
        bool operator <= (const Fraction& left, const Fraction& right) { return true; }
        bool operator >= (const Fraction& left, const Fraction& right) { return true; }
        bool operator > (const Fraction& left, const Fraction& right) { return true; }
        bool operator > (const float& left, const Fraction& right) { return true; }
        bool operator > (const Fraction& left, const float& right) { return true; }
        bool operator < (const Fraction& left, const Fraction& right) { return true; }
        bool operator < (const float& left, const Fraction& right) { return true; }
        bool operator < (const Fraction& left, const float& right) { return true; }
        // Friend functions.
        friend Fraction operator * (const float& left, const Fraction& right) { return this; }
        friend Fraction operator - (const float& left, const Fraction& right) { return this; }
        friend Fraction operator / (const float& left, const Fraction& right) { return this; }
        friend Fraction operator * (const float& left, const Fraction& right) { return this; }

        // Get methods.
        int& getNumerator () { return _a; }
        int& getDenominator () { return _b; }
    };
}

#endif //SP2_EX3A_FRACTION_H
