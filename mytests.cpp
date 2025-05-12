#include <gtest/gtest.h>
#include "student_test.h"

TEST(TestStudentOperators, Destructor)
{
    EXPECT_TRUE(StudentTest::test_destructor());
}
TEST(TestStudentOperators, CopyConstructor)
{
    EXPECT_TRUE(StudentTest::test_copy_constructor());
}
TEST(TestStudentOperators, CopyAssignmentOperator)
{
    EXPECT_TRUE(StudentTest::test_copy_assignment_operator());
}
TEST(TestStudentOperators, MoveConstructor)
{
    EXPECT_TRUE(StudentTest::test_move_constructor());
}
TEST(TestStudentOperators, MoveAssignmentOperator)
{
    EXPECT_TRUE(StudentTest::test_move_assignment_operator());
}
TEST(TestStudentOperators, InputOperator)
{
    EXPECT_TRUE(StudentTest::test_input_operator());
}
TEST(TestStudentOperators, OutputOperator)
{
    EXPECT_TRUE(StudentTest::test_output_operator());
}

int main(int arg, char **argv)
{
    ::testing::InitGoogleTest(&arg, argv);
    return RUN_ALL_TESTS();
}
