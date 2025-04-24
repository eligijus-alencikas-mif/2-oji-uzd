#include "student_test.h"
#include <iostream>`

bool StudentTest::test_destructor()
{
    Student *student;
    new Student("John", "Doe", {90, 85, 80}, 95);
    delete student; // Destructor should be called here
    return true; // If we reach this point, the destructor worked fine
}

bool StudentTest::test_copy_constructor()
{
    Student original("John", "Doe", {90, 85, 80}, 95);
    Student copy(original); // Copy constructor should be called here

    // Check if the copied object has the same data as the original
    return (copy.get_f_name() == original.get_f_name() &&
            copy.get_l_name() == original.get_l_name() &&
            copy.get_hw_scores() == original.get_hw_scores() &&
            copy.get_exam_score() == original.get_exam_score() &&
            copy.get_final_score_avg() == original.get_final_score_avg() &&
            copy.get_final_score_med() == original.get_final_score_med());
}

bool StudentTest::test_copy_assignment_operator()
{
    Student original("John", "Doe", {90, 85, 80}, 95);
    Student copy("Jane", "Smith", {70, 75, 80}, 85); // Different data

    copy = original; // Copy assignment operator should be called here

    // Check if the copied object has the same data as the original
    return (copy.get_f_name() == original.get_f_name() &&
            copy.get_l_name() == original.get_l_name() &&
            copy.get_hw_scores() == original.get_hw_scores() &&
            copy.get_exam_score() == original.get_exam_score() &&
            copy.get_final_score_avg() == original.get_final_score_avg() &&
            copy.get_final_score_med() == original.get_final_score_med());
}

bool StudentTest::test_move_constructor()
{
    Student original("John", "Doe", {90, 85, 80}, 95);
    Student moved(std::move(original)); // Move constructor should be called here

    std::cout << "Stuff:" << std::endl;
    std::cout << moved.get_f_name() << std::endl;
    std::cout << moved.get_l_name() << std::endl;
    std::cout << moved.get_hw_scores().size() << std::endl;
    std::cout << moved.get_exam_score() << std::endl;
    std::cout << moved.get_final_score_avg() << std::endl;
    std::cout << moved.get_final_score_med() << std::endl;
    std::cout << "End of stuff" << std::endl;

    // Check if the moved object has the same data as the original
    return (moved.get_f_name() == "John" &&
            moved.get_l_name() == "Doe" &&
            moved.get_hw_scores() == std::vector<int>{90, 85, 80} &&
            moved.get_exam_score() == 95 &&
            moved.get_final_score_avg() == 90 &&
            moved.get_final_score_med() == 85);
}

bool StudentTest::test_move_assignment_operator()
{
    Student original("John", "Doe", {90, 85, 80}, 95);
    Student moved("Jane", "Smith", {70, 75, 80}, 85); // Different data

    moved = std::move(original); // Move assignment operator should be called here




    // Check if the moved object has the same data as the original
    return (moved.get_f_name() == "John" &&
            moved.get_l_name() == "Doe" &&
            moved.get_hw_scores() == std::vector<int>{90, 85, 80} &&
            moved.get_exam_score() == 95 &&
            moved.get_final_score_avg() == 90 &&
            moved.get_final_score_med() == 85);
}

bool StudentTest::test_all()
{
    return test_destructor() &&
           test_copy_constructor() &&
           test_copy_assignment_operator() &&
           test_move_constructor() &&
           test_move_assignment_operator();
}

