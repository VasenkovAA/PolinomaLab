// Copyright 2023 VasenkovAA
#include "gtest.h"
#include <climits>
#include "../TFraction/TFroction.h"  
// ������������ ������������ � �������� ��������� � �����������
TEST(FractionConstructor, NumeratorDenominatorConstructor_1) {
    Fraction f(3, 4);
    EXPECT_EQ(f.getNumerator(), 3);
    EXPECT_EQ(f.getDenominator(), 4);
    EXPECT_EQ(f.getSign(), '+');
}
TEST(FractionConstructor, NumeratorDenominatorConstructor_2) {
    Fraction f(-3, 4);
    EXPECT_EQ(f.getNumerator(), 3);
    EXPECT_EQ(f.getDenominator(), 4);
    EXPECT_EQ(f.getSign(), '-');
}
TEST(FractionConstructor, NumeratorDenominatorConstructor_3) {
    Fraction f(3, -4);
    EXPECT_EQ(f.getNumerator(), 3);
    EXPECT_EQ(f.getDenominator(), 4);
    EXPECT_EQ(f.getSign(), '-');
}
TEST(FractionConstructor, NumeratorDenominatorConstructor_4) {
    Fraction f(-3, -4);
    EXPECT_EQ(f.getNumerator(), 3);
    EXPECT_EQ(f.getDenominator(), 4);
    EXPECT_EQ(f.getSign(), '+');
}
// ������������ ������������ � �������� �����, ��������� � �����������
TEST(FractionConstructor, SignNumeratorDenominatorConstructor_1) {
    Fraction f('-', 3, 4);
    EXPECT_EQ(f.getNumerator(), 3);
    EXPECT_EQ(f.getDenominator(), 4);
    EXPECT_EQ(f.getSign(), '-');
}
TEST(FractionConstructor, SignNumeratorDenominatorConstructor_2) {
    Fraction f('-', -3, 4);
    EXPECT_EQ(f.getNumerator(), 3);
    EXPECT_EQ(f.getDenominator(), 4);
    EXPECT_EQ(f.getSign(), '+');
}
TEST(FractionConstructor, SignNumeratorDenominatorConstructor_3) {
    Fraction f('-', 3, -4);
    EXPECT_EQ(f.getNumerator(), 3);
    EXPECT_EQ(f.getDenominator(), 4);
    EXPECT_EQ(f.getSign(), '+');
}
TEST(FractionConstructor, SignNumeratorDenominatorConstructor_4) {
    Fraction f('-', -3, -4);
    EXPECT_EQ(f.getNumerator(), 3);
    EXPECT_EQ(f.getDenominator(), 4);
    EXPECT_EQ(f.getSign(), '-');
}
TEST(FractionConstructor, SignNumeratorDenominatorConstructor_5) {
    Fraction f('+', 3, 4);
    EXPECT_EQ(f.getNumerator(), 3);
    EXPECT_EQ(f.getDenominator(), 4);
    EXPECT_EQ(f.getSign(), '+');
}
TEST(FractionConstructor, SignNumeratorDenominatorConstructor_6) {
    Fraction f('+', -3, 4);
    EXPECT_EQ(f.getNumerator(), 3);
    EXPECT_EQ(f.getDenominator(), 4);
    EXPECT_EQ(f.getSign(), '-');
}
TEST(FractionConstructor, SignNumeratorDenominatorConstructor_7) {
    Fraction f('+', 3, -4);
    EXPECT_EQ(f.getNumerator(), 3);
    EXPECT_EQ(f.getDenominator(), 4);
    EXPECT_EQ(f.getSign(), '-');
}
TEST(FractionConstructor, SignNumeratorDenominatorConstructor_8) {
    Fraction f('+', -3, -4);
    EXPECT_EQ(f.getNumerator(), 3);
    EXPECT_EQ(f.getDenominator(), 4);
    EXPECT_EQ(f.getSign(), '+');
}
// ����� ��� ���������� ��������, ���������, ��������� � �������
// ����� ��� ���������� ��������
TEST(FractionTest, Addition_1) {
    Fraction a(1, 2);
    Fraction b(1, 3);
    Fraction c = a + b;
    ASSERT_EQ(c, Fraction(5, 6));
}
TEST(FractionTest, Addition_2) {
    Fraction a(-1, 2);
    Fraction b(1, 3);
    Fraction c = a + b;
    ASSERT_EQ(c, Fraction(-1, 6));
}
TEST(FractionTest, Addition_3) {
    Fraction a(1, 2);
    Fraction b(-1, 3);
    Fraction c = a + b;
    ASSERT_EQ(c, Fraction(1, 6));
}
TEST(FractionTest, Addition_4) {
    Fraction a(1, -2);
    Fraction b(1, -3);
    Fraction c = a + b;
    ASSERT_EQ(c, Fraction(-5, 6));
}
// ����� ��� ���������� ���������
TEST(FractionTest, Subtraction_1) {
    Fraction a(3, 4);
    Fraction b(1, 4);
    Fraction c = a - b;
    ASSERT_EQ(c, Fraction(1, 2));
}
TEST(FractionTest, Subtraction_2) {
    Fraction a(-3, 4);
    Fraction b(1, 4);
    Fraction c = a - b;
    ASSERT_EQ(c, Fraction(-1, 1));
}
TEST(FractionTest, Subtraction_3) {
    Fraction a(3, -4);
    Fraction b(1, -4);
    Fraction c = a - b;
    ASSERT_EQ(c, Fraction(-1, 2));
}
TEST(FractionTest, Subtraction_4) {
    Fraction a(3, 4);
    Fraction b(1, -4);
    Fraction c = a - b;
    ASSERT_EQ(c, Fraction(1, 1));
}
TEST(FractionTest, Multiplication) {
    Fraction a(2, 3);
    Fraction b(3, 4);
    Fraction c = a * b;
    ASSERT_EQ(c, Fraction(1, 2));
}
// ����� ��� ���������� �������
TEST(FractionTest, Division_1) {
    Fraction a(3, 5);
    Fraction b(2, 5);
    Fraction c = a / b;
    ASSERT_EQ(c, Fraction(3, 2));
}
TEST(FractionTest, Division_2) {
    Fraction a(3, 5);
    Fraction b(2, -5);
    Fraction c = a / b;
    ASSERT_EQ(c, Fraction(-3, 2));
}
TEST(FractionTest, Division_3) {
    Fraction a(3, -5);
    Fraction b(2, 5);
    Fraction c = a / b;
    ASSERT_EQ(c, Fraction(-3, 2));
}
TEST(FractionTest, Division_4) {
    Fraction a(3, -5);
    Fraction b(2, -5);
    Fraction c = a / b;
    ASSERT_EQ(c, Fraction(3, 2));
}
// ���� ��� ��������� ����������
TEST(FractionTest, Assignment_) {
    Fraction a(1, 2);
    EXPECT_ANY_THROW(a = a);
}
// ���� ��� ��������� ���������
TEST(FractionTest, Equality_1) {
    Fraction a(1, 2);
    Fraction b(1, 2);
    ASSERT_EQ(a, b);
}
TEST(FractionTest, Equality_2) {
    Fraction a(1, 2);
    Fraction b(2, 4);
    ASSERT_EQ(a, b);
}
// ���� ��� ��������� �����������
TEST(FractionTest, Inequality) {
    Fraction a(1, 2);
    Fraction b(2, 3);
    ASSERT_NE(a, b);
}
// ���� ��� ������ ���������
TEST(FractionTest, Negation) {
    Fraction a(1, 2);
    Fraction result = -a;
    ASSERT_EQ(result, Fraction(-1, 2));
}
// ���� ��� ������ ��������������� �����
TEST(FractionTest, Flip) {
    Fraction a(1, 2);
    Fraction result = a.flip();
    ASSERT_EQ(result, Fraction(2, 1));
}
// ���� ��� ������ �������� ��������
TEST(FractionTest, Swap_1) {
    Fraction a(1, 2);
    Fraction b(3, 4);
    a.swap(b);
    ASSERT_EQ(a, Fraction(3, 4));
    ASSERT_EQ(b, Fraction(1, 2));
}
TEST(FractionTest, Swap_2) {
    Fraction a(1, -2);
    Fraction b(3, 4);
    a.swap(b);
    ASSERT_EQ(a, Fraction(3, 4));
    ASSERT_EQ(b, Fraction(1, -2));
}
// ���� ��� ��������� ������
TEST(FractionTest, Output_1) {
    Fraction a(1, 2);
    ostringstream os;
    os << a;
    ASSERT_EQ(os.str(), "1/2");
}
TEST(FractionTest, Output_2) {
    Fraction a(1, -2);
    ostringstream os;
    os << a;
    ASSERT_EQ(os.str(), "-1/2");
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}