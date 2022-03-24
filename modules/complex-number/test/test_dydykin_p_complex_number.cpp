// Copyright 2022 Dydykin Pavel

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Dydykin_Pavel_ComplexNumberTest, Can_Create_Zero) {

    double re1 = 1.5;
    double im1 = 0.3;

    double re2 = 4.5;
    double im2 = 0.7

    ComplexNumber z1(re1, im1);
    ComplexNumber z2(re2, im2);
    ComplexNumber z3 = z1 + z2;

    EXPECT_EQ(6, z3.getRe());
    EXPECT_EQ(1, z3.getIm());
}