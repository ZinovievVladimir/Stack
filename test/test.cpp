#include <gtest/gtest.h>
#include "Stack.h"

TEST(StackFunctions, CanPush) {
  Stack St;

  St.push(10);

  EXPECT_EQ(St.gettop(), 10);
}

TEST(StackFunctions, CanPop) {
  Stack St;

  St.push(10);
  St.push(20);
  St.pop();

  EXPECT_EQ(St.gettop(), 10);
}

TEST(StackFunctions, CanFindMin) {
  Stack St;

  for (int i = 0; i < 10; i++)
    St.push(i);


  EXPECT_EQ(St.min(), 0);
}

TEST(StackFunctions, ThrowWhenTopEmptyList) {
  Stack St;

  EXPECT_ANY_THROW(St.gettop());
}

TEST(StackFunctions, ThrowWhenFindMinEmptyList) {
  Stack St;

  EXPECT_ANY_THROW(St.min());
}

TEST(StackFunctions, CanPopEmptyList) {
  Stack St;

  EXPECT_FALSE(St.pop());
}

int main(int ac, char* av[]) {
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}