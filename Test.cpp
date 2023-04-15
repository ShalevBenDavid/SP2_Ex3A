// Created by Shalev Ben David.
#include "doctest.h"
#include "sources/Fraction.hpp"

TEST_CASE("Case 1: Constructor Check.") {
    // ---- Testing: Creating a fraction with 0 as denominator.
    // ---- Expecting: Should throw exception.
    CHECK_THROWS(Fraction(1, 0));
    // ---- Testing: Creating a negative fraction.
    // ---- Expecting: Should work.
    CHECK_NOTHROW(Fraction(-1, 2));
}

TEST_CASE("Case 2: Equality And No Equality.") {
    // ---- Testing: Creating a fraction with 0 as numerator.
    // ---- Expecting: Should be equal to the number 0.
    Fraction f1 (0, 2);
    CHECK_EQ(f1, 0);
    // ---- Testing: Creating a fraction where both numerator and denominator are negative.
    // ---- Expecting: Should be equal to the positive.
    Fraction f2 (-1, -2);
    CHECK_EQ(f2, 1/2);
    // ---- Testing: Creating a fraction which can be reduced.
    // ---- Expecting: Should be equal to its reduced form.
    Fraction f2 (4, 8);
    CHECK_EQ(f2, 1/2);
}