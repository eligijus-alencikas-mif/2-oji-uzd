#ifndef STUDENT_TEST_H
#define STUDENT_TEST_H

#include "student.h"

class StudentTest
{
    public:
    static bool test_destructor();
    static bool test_copy_constructor();
    static bool test_copy_assignment_operator();
    static bool test_move_constructor();
    static bool test_move_assignment_operator();
    static bool test_all();
};

#endif // STUDENT_TEST_H