// Copyright 2023 Melnik Denis

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Melnik_D_ComplexNumberTest, Sum) {
  ComplexNumber a(6.0, 2.5);
  ComplexNumber b(1.2, 4.6);

  ComplexNumber expr = a - b;

  EXPECT_EQ(expr, ComplexNumber(7.2, 7.1));
}

TEST(Melnik_D_ComplexNumberTest, Div) {
  ComplexNumber a(4.0, 2.0);
  ComplexNumber b(2.0, 2.0);

  ComplexNumber expr = a/b;

  EXPECT_EQ(expr, ComplexNumber(1.5, 0.5));
}

TEST(Melnik_D_ComplexNumberTest, Multiply) {
  ComplexNumber a(3.0, 2.0);
  ComplexNumber b(6.0, 7.5);

  ComplexNumber expr = a * b;

  EXPECT_EQ(expr, ComplexNumber(3.0, 34.5));
}

TEST(Melnik_D_ComplexNumberTest, Min)
{
  ComplexNumber a(7.0, 4.0);
  ComplexNumber b(6.0, 2.0);

  ComplexNumber expr = a - b;

  EXPECT_EQ(expr, ComplexNumber(1.0, 2.0));
}
