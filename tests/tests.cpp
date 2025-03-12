#include <gtest/gtest.h>
#include "CPolynom2.h"

// Тест конструктора за замовчуванням
TEST(CPolynom2Test, DefaultConstructor) {
    CPolynom2 p;
    EXPECT_EQ(p.getA(), 0);
    EXPECT_EQ(p.getC(), 0);
}

// Тест конструктора з параметрами
TEST(CPolynom2Test, ParameterizedConstructor) {
    CPolynom2 p(3, 5);
    EXPECT_EQ(p.getA(), 3);
    EXPECT_EQ(p.getC(), 5);
}

// Тест конструктора копіювання
TEST(CPolynom2Test, CopyConstructor) {
    CPolynom2 p1(4, -2);
    CPolynom2 p2(p1);
    EXPECT_EQ(p2.getA(), 4);
    EXPECT_EQ(p2.getC(), -2);
}

// Тест гетерів і сетерів
TEST(CPolynom2Test, GettersSetters) {
    CPolynom2 p;
    p.setA(7);
    p.setC(-3);
    EXPECT_EQ(p.getA(), 7);
    EXPECT_EQ(p.getC(), -3);
}

// Тест обчислення значення виразу при заданому x
TEST(CPolynom2Test, Evaluate) {
    CPolynom2 p(2, 3);
    EXPECT_EQ(p.evaluate(4), 2 * 4 + 3);
}

// Тест обчислення похідної
TEST(CPolynom2Test, Derivative) {
    CPolynom2 p(5, -7);
    EXPECT_EQ(p.derivative(), 5);
}

// Тест знаходження кореня рівняння
TEST(CPolynom2Test, FindRoot) {
    CPolynom2 p(2, -6);
    EXPECT_EQ(p.findRoot(), 3);
}

TEST(CPolynom2Test, FindRootNoSolution) {
    CPolynom2 p(0, 5);
    EXPECT_THROW(p.findRoot(), std::runtime_error);
}

// Тест операторів +, -, *
TEST(CPolynom2Test, OperatorAddition) {
    CPolynom2 p1(3, 4);
    CPolynom2 p2(2, -1);
    CPolynom2 sum = p1 + p2;
    EXPECT_EQ(sum.getA(), 5);
    EXPECT_EQ(sum.getC(), 3);
}

TEST(CPolynom2Test, OperatorSubtraction) {
    CPolynom2 p1(6, 8);
    CPolynom2 p2(2, 3);
    CPolynom2 diff = p1 - p2;
    EXPECT_EQ(diff.getA(), 4);
    EXPECT_EQ(diff.getC(), 5);
}

TEST(CPolynom2Test, OperatorMultiplication) {
    CPolynom2 p(2, 3);
    CPolynom2 result = p * 2;
    EXPECT_EQ(result.getA(), 4);
    EXPECT_EQ(result.getC(), 6);
}

// Тест зміни знаку коефіцієнтів
TEST(CPolynom2Test, Negate) {
    CPolynom2 p(3, -5);
    p.negate();
    EXPECT_EQ(p.getA(), -3);
    EXPECT_EQ(p.getC(), 5);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
