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
    // ---- Testing: Creating a fraction with large denominator.
    // ---- Expecting: Should work.
    CHECK_NOTHROW(Fraction(1, 100000000));
    // ---- Testing: Creating a fraction with large numerator.
    // ---- Expecting: Should work.
    CHECK_NOTHROW(Fraction(100000000, 1));
}

TEST_CASE("Case 2: Commutative, Associative and Distributive .") {
    Fraction f1 (1, 2);
    Fraction f2 (3, 4);
    Fraction f3 (1, 8);
    // ---- Testing: Checking commutative.
    // ---- Expecting: Should work.
    CHECK(f1 + f2 == f2 + f1);
    CHECK(f1 * f2 == f2 * f1);
    // ---- Testing: Checking associative.
    // ---- Expecting: Should work.
    CHECK(f1 + (f2 + f3) == (f1 + f2) + f3);
    CHECK(f1 * (f2 * f3) == (f1 * f2) * f3);
    // ---- Testing: Checking distributive.
    // ---- Expecting: Should work.
    CHECK(f1 * (f2 + f3) == f1 * f2 + f1 * f3);
}

TEST_CASE("Case 3: Reduce Form.") {
    // ---- Testing: Simple reduction.
    // ---- Expecting: Should be equal to its reduced form.
    Fraction f1 (2, 8);
    CHECK(f1 == 1/4);
    // ---- Testing: Creating a fraction where both numerator and denominator are negative.
    // ---- Expecting: Should be equal to the positive.
    Fraction f2 (-1, -2);
    CHECK(f2 == 1/2);
    // ---- Testing: Creating a fraction which is full.
    // ---- Expecting: Should be equal to 1.
    Fraction f3 (4, 4);
    CHECK(f3 == 1);
    // ---- Testing: Creating a fraction which is full where both numerator and denominator are negative.
    // ---- Expecting: Should be equal to 1.
    Fraction f4 (-4, -4);
    CHECK(f4 == 1);
    // ---- Testing: Creating a fraction which is full where numerator is - and denominator is +.
    // ---- Expecting: Should be equal to 1.
    Fraction f5 (-1000, 1000);
    CHECK(f5 == -1);
}

TEST_CASE("Case 4: Checks With 0.") {
    // ---- Testing: Creating a fraction with 0 as numerator.
    // ---- Expecting: Should be equal to the number 0.
    Fraction f1 (0, 2);
    CHECK(f1 == 0);
    // ---- Testing: Creating a fraction and adding 0 to it.
    // ---- Expecting: Should be the same.
    Fraction f2 (1, 1);
    CHECK(f2 + 0 == f2);
    // ---- Testing: Multiplying the fraction by 0.
    // ---- Expecting: Should be equal to 0.
    CHECK(f2 * 0 == 0);
    // ---- Testing: Dividing a fraction with 0.
    // ---- Expecting: Should throw an exception.
    CHECK_THROWS(f2 / 0);
}

TEST_CASE("Case 5: Checking Equality Cases.") {
    // ---- Testing: Creating an endless fraction 1.3333...
    // ---- Expecting: Should be equal to 1.333 since there is 3 digits accuracy.
    Fraction f1 (1, 3);
    CHECK(f1 == 0.333);
    // ---- Testing: Creating a fraction where the denominator is 1.
    // ---- Expecting: Should be equal to the numerator.
    Fraction f2 (5, 1);
    CHECK(f2 == 5);
}

TEST_CASE("Case 6: Operator ++ And --.") {
    Fraction f1 (1, 2);
    Fraction f2 (1, 4);
    // ---- Testing: Adding 1 to f1 and then returning.
    // ---- Expecting: Should be equal to 1.5.
    CHECK(++f1 == 1.5);
    // ---- Testing: Returning f1 and then adding 1 to it.
    // ---- Expecting: Should be equal to 0.5.
    CHECK(f1++ == 0.5);
    // ---- Testing: Subtracting 1 from f2 and then returning.
    // ---- Expecting: Should be equal to -0.5.
    CHECK(--f2 == -0.75);
    // ---- Testing: Returning f2 and then Subtracting 1 from it.
    // ---- Expecting: Should be equal to 0.5.
    CHECK(f2-- == 0.25);
}

TEST_CASE("Case 7: Operator +.") {
    Fraction f (1, 2);
    // ---- Testing: Adding 0.5.
    // ---- Expecting: Should be equal to 1.
    CHECK(f + f == 1);
    CHECK(f + 0.5 == 1);
    CHECK(0.5 + f == 1);
}

TEST_CASE("Case 8: Operator *.") {
    Fraction f (1, 2);
    // ---- Testing: Multiplying by 0.5.
    // ---- Expecting: Should be equal to 0.25.
    CHECK(f * f == 0.25);
    CHECK(f * 0.5 == 0.25);
    CHECK(0.5 * f == 0.25);
}

TEST_CASE("Case 9: Operator /.") {
    Fraction f (1, 2);
    // ---- Testing: Dividing by 0.5.
    // ---- Expecting: Should be equal to 1.
    CHECK(f / f == 1);
    CHECK(f / 0.5 == 1);
    CHECK(0.5 / f == 1);
}

TEST_CASE("Case 10: Operator -.") {
    Fraction f (1, 2);
    // ---- Testing: Subtracting 0.5.
    // ---- Expecting: Should be equal to 0.
    CHECK(f - f == 0);
    CHECK(f - 0.5 == 0);
    CHECK(0.5 - f == 0);
}