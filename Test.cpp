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
    Fraction f3 (2, 8);
    CHECK_EQ(f3 + f3, 1/2);
    CHECK_EQ(f3 * f3, 1/16);
    // ---- Testing: Creating a fraction which is full.
    // ---- Expecting: Should be equal to 1.
    Fraction f4 (4, 4);
    CHECK_EQ(f4, 1);
    // ---- Testing: Creating a fraction which is full where both numerator and denominator are negative.
    // ---- Expecting: Should be equal to 1.
    Fraction f4 (-4, -4);
    CHECK_EQ(f4, 1);
}

TEST_CASE("Case 3: Commutative, Associative and Distributive .") {
    Fraction f1 (1, 2);
    fraction f2 (3, 4);
    fraction f3 (1, 8);
    // ---- Testing: Checking commutative.
    // ---- Expecting: Should work.
    CHECK_EQ(f1 + f2, f2 + f1);
    CHECK_EQ(f1 * f2, f2 * f1);
    // ---- Testing: Checking associative.
    // ---- Expecting: Should work.
    CHECK_EQ(f1 + (f2 + f3), (f1 + f2) + f3);
    CHECK_EQ(f1 * (f2 * f3), (f1 * f2) * f3);
    // ---- Testing: Checking distributive.
    // ---- Expecting: Should work.
    CHECK_EQ(f1 * (f2 + f3), f1 * f2 + f1 * f3);
}