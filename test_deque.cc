#include "deque.h"
#include "gtest/gtest.h"

TEST(Deque, Empty) {
Deque<int> dq;

/* Should be fully empty */
EXPECT_EQ(dq.Empty(), true);
EXPECT_EQ(dq.Size(), 0);
EXPECT_THROW(dq.PopFront(), std::exception);
}

TEST(Deque, DoubleInsertionFront) {
Deque<int> dq;
/* Test some insertion */
dq.PushFront(67);
dq.PushFront(34);
EXPECT_EQ(dq.Empty(), false);
EXPECT_EQ(dq.Size(), 2);
EXPECT_EQ(dq[0], 34);
EXPECT_EQ(dq[1], 67);
EXPECT_EQ(dq.Back(), 67);
}

TEST(Deque, DoubleInsertionBack) {
Deque<int> dq;
/* Test some insertion */
dq.PushBack(23);
dq.PushBack(42);
EXPECT_EQ(dq.Empty(), false);
EXPECT_EQ(dq.Size(), 2);
EXPECT_EQ(dq[0], 23);
EXPECT_EQ(dq[1], 42);
EXPECT_EQ(dq.Back(), 42);
}

TEST(Deque, DoubleInsertionBackFront) {
Deque<int> dq;
/* Test some insertion */
dq.PushBack(23);
dq.PushFront(42);
EXPECT_EQ(dq.Empty(), false);
EXPECT_EQ(dq.Size(), 2);
EXPECT_EQ(dq[0], 42);
EXPECT_EQ(dq[1], 23);
EXPECT_EQ(dq.Back(), 23);
}

TEST(Deque, TriplePushPopFrontBack) {
Deque<int> dq;
/* Test some insertion */
dq.PushBack(5);
dq.PushFront(4);
dq.PushBack(6);
dq.PushFront(3);
dq.PushFront(2);
dq.PushBack(7);
EXPECT_EQ(dq[0], 2);
EXPECT_EQ(dq[1], 3);
EXPECT_EQ(dq[2], 4);
EXPECT_EQ(dq[3], 5);
EXPECT_EQ(dq[4], 6);
EXPECT_EQ(dq[5], 7);
EXPECT_EQ(dq.Empty(), false);
EXPECT_EQ(dq.Size(), 6);
dq.PopBack();
dq.PopBack();
dq.PopFront();
dq.PopFront();
EXPECT_EQ(dq.Size(), 2);
EXPECT_EQ(dq[0], 4);
EXPECT_EQ(dq[1], 5);
}

TEST(Deque, Clear) {
Deque<int> dq;

/* Should be fully empty */
EXPECT_EQ(dq.Empty(), true);
EXPECT_EQ(dq.Size(), 0);
dq.PushFront(21);
dq.PushBack(48);
EXPECT_EQ(dq.Size(), 2);
dq.Clear();
EXPECT_EQ(dq.Empty(), true);
EXPECT_EQ(dq.Size(), 0);
}

TEST(Deque, ShrinkToFit) {
Deque<int> dq;
/* Test some insertion */
dq.PushBack(5);
dq.PushFront(4);
dq.PushBack(6);
dq.PushFront(3);
dq.PushFront(2);
dq.PushBack(7);
EXPECT_EQ(dq[0], 2);
EXPECT_EQ(dq[1], 3);
EXPECT_EQ(dq[2], 4);
EXPECT_EQ(dq[3], 5);
EXPECT_EQ(dq[4], 6);
EXPECT_EQ(dq[5], 7);
EXPECT_EQ(dq.Empty(), false);
EXPECT_EQ(dq.Size(), 6);
dq.PopBack();
dq.PopBack();
dq.PopFront();
dq.PopFront();
EXPECT_EQ(dq.Size(), 2);
EXPECT_EQ(dq[0], 4);
EXPECT_EQ(dq[1], 5);
}





int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

