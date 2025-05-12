#include <gtest/gtest.h>
#include "student_test.h"
#include "inputs.h"
#include "constant_definitions.h"
#include <iostream>

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
TEST(StudentCalculations, CalculateGrades)
{
    std::vector<Student> students;
    students.push_back(Student("John", "Doe", {9, 8, 7}, 8));
    students.push_back(Student("Jane", "Smith", {10, 9, 8}, 9));
    students.push_back(Student("Alice", "Johnson", {4, 6, 7, 8, 9}, 6));

    Calc_Students::calc_grades(students);

    EXPECT_DOUBLE_EQ(students[0].get_final_score_avg(), HW_WEIGHT * 8 + EXAM_WEIGHT * 8);
    EXPECT_DOUBLE_EQ(students[1].get_final_score_avg(), HW_WEIGHT * 9 + EXAM_WEIGHT * 9);
    EXPECT_DOUBLE_EQ(students[2].get_final_score_avg(), HW_WEIGHT * 6.8 + EXAM_WEIGHT * 6);
    EXPECT_DOUBLE_EQ(students[0].get_final_score_med(), 8.0);
    EXPECT_DOUBLE_EQ(students[1].get_final_score_med(), 9.0);
    EXPECT_DOUBLE_EQ(students[2].get_final_score_med(), 6.5);
}

int main(int arg, char **argv)
{
    ::testing::InitGoogleTest(&arg, argv);
    return RUN_ALL_TESTS();
}
