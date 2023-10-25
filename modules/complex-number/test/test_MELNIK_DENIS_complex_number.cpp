// Copyright 2023 Melnik Denis

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Melnik_D_ComplexNumberTest, Sum) {
  double re1 = 6.0;
  double re2 = 1.2;
  double im1 = 2.5;
  double im2 = 4.6;

  ComplexNumber a(re1, im1);
  ComplexNumber b(re2, im2);

  double re = re1 + re2;
  double im = im1 + im2;

  ComplexNumber expr = a + b;

  EXPECT_EQ(re, expr.getRe());
  EXPECT_EQ(im, expr.getIm());
}

TEST(Melnik_D_ComplexNumberTest, Div) {
  double re1 = 4.0;
  double re2 = 1.0;
  double im1 = 2.0;
  double im2 = 1.0;

  ComplexNumber a(re1, im1);
  ComplexNumber b(re2, im2);

  double re = (re1 * re2 + im1 * im2) / (pow(re2, 2) + pow(im2, 2));
  double im = (re2 * im1 - re1 * im2) / (pow(re2, 2) + pow(im2, 2));

  ComplexNumber expr = a / b;

  EXPECT_EQ(re, expr.getRe());
  EXPECT_EQ(im, expr.getIm());
}

TEST(Melnik_D_ComplexNumberTest, Mult) {
  double re1 = 2.0;
  double re2 = 2.0;
  double im1 = 3.0;
  double im2 = 2.0;

  ComplexNumber a(re1, im1);
  ComplexNumber b(re2, im2);

  double re = re1 * re2 - im1 * im2;
  double im = re1 * im2 + re2 * im1;

  ComplexNumber expr = a * b;

  EXPECT_EQ(re, expr.getRe());
  EXPECT_EQ(im, expr.getIm());
}

TEST(Melnik_D_ComplexNumberTest, Min) {
  double re1 = 5.0;
  double re2 = 2.0;
  double im1 = 3.0;
  double im2 = 1.0;

  ComplexNumber a(re1, im1);
  ComplexNumber b(re2, im2);

  double re = re1 - re2;
  double im = im1 - im2;

  ComplexNumber expr = a - b;

  EXPECT_EQ(re, expr.getRe());
  EXPECT_EQ(im, expr.getIm());
}

TEST(Melnik_D_ComplexNumberTest, Equal) {
  double re1 = 4.0;
  double re2 = 3.0;
  double im1 = 2.0;
  double im2 = 7.0;

  ComplexNumber a(re1, im1);
  ComplexNumber b(re2, im2);

  a = b;

  EXPECT_EQ(a.getRe(), b.getRe());
  EXPECT_EQ(a.getIm(), b.getIm());
  EXPECT_EQ(a.getRe(), 3.0);
  EXPECT_EQ(a.getIm(), 7.0);
}

TEST(Melnik_D_ComplexNumberTest, Mult_Min) {
  double re1 = 7.0;
  double re2 = 2.0;
  double im1 = 6.0;
  double im2 = 2.0;
  double re3 = 3.0;
  double im3 = 1.0;

  ComplexNumber a(re1, im1);
  ComplexNumber b(re2, im2);
  ComplexNumber c(re3, im3);

  double re = re1 - re2 - re3;
  double im = im1 - im2 - im3;

  ComplexNumber expr = a - b - c;

  EXPECT_EQ(re, expr.getRe());
  EXPECT_EQ(im, expr.getIm());
}