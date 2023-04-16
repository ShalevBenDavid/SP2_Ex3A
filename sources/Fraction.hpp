// Created by Shalev Ben David.

#ifndef SP2_EX3A_FRACTION_H
#define SP2_EX3A_FRACTION_H

namespace ariel {
    class Fraction {
        // Private attributes.
        int _numerator; // Numerator.
        int _denominator; // Denominator.

    public:
        // Constructor.
        Fraction(int numerator, int denominator) : _numerator(numerator), _denominator(denominator) {}

        // Operator methods.
        ostream& operator << (ostream& output, const Fraction& frac) {
            return (output << frac._numerator << '/' <<  frac._denominator);
        }
        Fraction operator + (const Fraction& other) const;
        Fraction operator + (const float& other) const;
        Fraction operator - (const Fraction& other) const;
        Fraction operator - (const float& other) const;
        Fraction operator / (const Fraction& other) const;
        Fraction operator / (const float& other) const;
        Fraction operator * (const Fraction& other) const;
        Fraction operator * (const float& other) const;
        // Prefix increment (++n).
        Fraction& operator++() { return *this; }
        // Prefix decrement (--n).
        Fraction& operator--() { return *this; }
        // Postfix increment (n++).
        Fraction operator++(int dont_care) { return this; }
        // Postfix decrement (--n).
        Fraction operator--(int dont_care) { return this; }
        // Compare operators.
//        bool operator == (const Fraction& left, const Fraction& right) { return true; }
//        bool operator == (const float& left, const Fraction& right) { return true; }
//        bool operator == (const Fraction& left, const float& right) { return true; }
//        bool operator <= (const Fraction& left, const Fraction& right) { return true; }
//        bool operator <= (const float& left, const Fraction& right) { return true; }
//        bool operator <= (const Fraction& left, const float& right) { return true; }
//        bool operator >= (const Fraction& left, const Fraction& right) { return true; }
//        bool operator >= (const float& left, const Fraction& right) { return true; }
//        bool operator >= (const Fraction& left, const float& right) { return true; }
//        bool operator > (const Fraction& left, const Fraction& right) { return true; }
//        bool operator > (const float& left, const Fraction& right) { return true; }
//        bool operator > (const Fraction& left, const float& right) { return true; }
//        bool operator < (const Fraction& left, const Fraction& right) { return true; }
//        bool operator < (const float& left, const Fraction& right) { return true; }
//        bool operator < (const Fraction& left, const float& right) { return true; }
        // Friend functions.
        //friend Fraction operator + (const float& left, const Fraction& right) { return this; }
        //friend Fraction operator - (const float& left, const Fraction& right) { return this; }
        //friend Fraction operator / (const float& left, const Fraction& right) { return this; }
        //friend Fraction operator * (const float& left, const Fraction& right) { return this; }

        // Get methods.
        int& getNumerator () { return _numerator; }
        int& getDenominator () { return _denominator; }
    };
}

#endif //SP2_EX3A_FRACTION_H
