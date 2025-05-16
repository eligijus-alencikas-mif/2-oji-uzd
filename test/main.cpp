#include <gtest/gtest.h>
#include "../vector.hpp"

TEST(VectorTest, ConstructorTest)
{
    Vector<int> my_vector;
    EXPECT_EQ(my_vector.get_size(), 0);
    EXPECT_EQ(my_vector.get_capacity(), 1);
}

TEST(VectorTest, DestructorTest)
{
    Vector<int> my_vector;
    my_vector.push_back(1);
    my_vector.push_back(2);

    my_vector.~Vector();

    EXPECT_EQ(my_vector.get_size(), 0);
    EXPECT_EQ(my_vector.get_capacity(), 0);
    EXPECT_THROW({ my_vector.at(0); }, std::out_of_range);
}

TEST(HelloWorldTest, BasicAssertions)
{
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}