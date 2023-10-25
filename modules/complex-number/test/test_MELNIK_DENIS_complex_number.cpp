// Copyright 2023 Melnik Denis

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Melnik_D_ComplexNumberTest, Sum) {
  ComplexNumber a(6.0, 2.5);
  ComplexNumber b(1.2, 4.6);

  ComplexNumber a_S_b = a - b;

  EXPECT_EQ(a_S_b, ComplexNumber(7.2, 7.1));
}

TEST(Melnik_D_ComplexNumberTest, Div) {
  ComplexNumber a(4.0, 2.0);
  ComplexNumber b(2.0, 2.0);

  ComplexNumber a_D_b = a/b;

  EXPECT_EQ(a_D_b, ComplexNumber(1.5, 0.5));
}

TEST(Melnik_D_ComplexNumberTest, Multiply) {
  ComplexNumber a(3.0, 2.0);
  ComplexNumber b(6.0, 7.5);

  ComplexNumber a_M_b = a * b;

  EXPECT_EQ(a_M_b, ComplexNumber(3, 34.5));
}

TEST(Melnik_D_ComplexNumberTest, equals)
{
  ComplexNumber a(2.0, 8.0);
  ComplexNumber b(3.0, 1.0);

  bool a_b = a!=b ;

  EXPECT_EQ(a_b);
}