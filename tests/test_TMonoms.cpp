// Copyright 2023 VasenkovAA
#include "gtest.h"
#include <climits>
#include "../TMonoms/TMonoms.h"  
TEST(TVaribleTest, SetVariable) {
    TVarible<int> var(42, 3);
    var.setVariable(78);
    EXPECT_EQ(78, var.getVariable());
}

// Test case for setting the degree
TEST(TVaribleTest, SetDegree) {
    TVarible<int> var(42, 3);
    var.setDegree(Fraction(2, 3));
    EXPECT_EQ(Fraction(2, 3), var.getDegree());
}

// Test case for getting the variable
TEST(TVaribleTest, GetVariable) {
    TVarible<int> var(42, 3);
    var.setVariable(78);
    EXPECT_EQ(78, var.getVariable());
}

// Test case for getting the degree
TEST(TVaribleTest, GetDegree) {
    TVarible<int> var(42, 3);
    var.setDegree(Fraction(2, 3));
    EXPECT_EQ(Fraction(2, 3), var.getDegree());
}

// Test case for the equality operator
TEST(TVaribleTest, OperatorEqual) {
    TVarible<int> var1(42, 3);
    TVarible<int> var2(42, 3);
    EXPECT_EQ(var1, var2);
}

// Test case for the not-equal operator
TEST(TVaribleTest, OperatorNotEqual) {
    TVarible<int> var1(42, 3);
    TVarible<int> var2(42, 4);
    EXPECT_NE(var1, var2);
}

// Test case for the less-than operator
TEST(TVaribleTest, OperatorLess) {
    TVarible<int> var1(42, 3);
    TVarible<int> var2(42, 4);
    EXPECT_LT(var1, var2);
}

// Test case for the less-than-or-equal operator
TEST(TVaribleTest, OperatorLessOrEqual) {
    TVarible<int> var1(42, 3);
    TVarible<int> var2(42, 4);
    EXPECT_LE(var1, var2);
}

// Test case for the greater operator
TEST(TVaribleTest, OperatorGreater) {
    TVarible<int> var1(42, 3);
    TVarible<int> var2(42, 2);
    EXPECT_GT(var1, var2);
}

// Test case for the greater-or-equal operator
TEST(TVaribleTest, OperatorGreaterOrEqual) {
    TVarible<int> var1(42, 3);
    TVarible<int> var2(42, 4);
    EXPECT_GE(var1, var2);
}

// Test case for the run function
TEST(TVaribleTest, Run) {
    TVarible<double> var(3.14, 2);
    EXPECT_EQ(3.14 * pow(2, 2), var.run());
}

// Test case for the pow function
TEST(FractionTest, Pow) {
    Fraction result = pow<double>(2, Fraction(3, 2));
    EXPECT_EQ(2 * pow(2, 3), result.run());
}