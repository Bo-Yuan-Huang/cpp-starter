#include <gtest/gtest.h>

#include "example.h"

TEST(Dummy, example) {
  Dummy d = Dummy();
  ASSERT_TRUE(d.doSomething());
}
