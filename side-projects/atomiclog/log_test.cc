#include <gtest/gtest.h>
#include "log.h"

struct message {
  int x;
};

TEST(log, add) {
  Log<message> log;  
  EXPECT_EQ(0, log.offset());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}