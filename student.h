#ifndef STUDENT_H
#define STUDENT_H
#include <vector>
#include <string>

class Student
{
private:
    std::string f_name, l_name;
    std::vector<int> hw_scores;
    int exam_score{};
    double final_score_avg{};
    double final_score_med{};
    bool allow_cval_mod = true;

public:
    Student(std::string f_name = "", std::string l_name = "", std::vector<int> hw_scores = {}, int exam_score = 0);
    ~Student();
    Student(const Student &other);

    Student &operator=(const Student &other);
    Student (Student &&other) noexcept; 
    Student &operator=(Student &&other) noexcept;

    std::string get_f_name() const;
    std::string get_l_name() const;
    std::vector<int> get_hw_scores() const;
    int get_exam_score() const;
    double get_final_score_avg() const;
    double get_final_score_med() const;
    void set_f_name(std::string f_name);
    void set_l_name(std::string l_name);
    void set_hw_scores(std::vector<int> hw_scores);
    void set_exam_score(int exam_score);
    void set_final_score_avg(double final_score_avg);
    void set_final_score_med(double final_score_med);
    void push_hw_score(int hw_score);
    void disallow_cval_mod();
};

#endif // STUDENT_H
