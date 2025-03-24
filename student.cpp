#include "student.h"

Student::Student(std::string f_name, std::string l_name, std::vector<int> hw_scores, int exam_score)
{
    this->f_name = f_name;
    this->l_name = l_name;
    this->hw_scores = hw_scores;
    this->exam_score = exam_score;
};

Student::~Student()
{
    this->f_name.clear();
    this->l_name.clear();
    this->hw_scores.clear();
};

std::string Student::get_f_name() const
{
    return f_name;
};

std::string Student::get_l_name() const
{
    return l_name;
};

std::vector<int> Student::get_hw_scores() const
{
    return hw_scores;
};

int Student::get_exam_score() const
{
    return exam_score;
};

double Student::get_final_score_avg() const
{
    return final_score_avg;
};

double Student::get_final_score_med() const
{
    return final_score_med;
};

void Student::set_f_name(std::string f_name)
{
    this->f_name = f_name;
};
void Student::set_l_name(std::string l_name)
{
    this->l_name = l_name;
};
void Student::set_hw_scores(std::vector<int> hw_scores)
{
    this->hw_scores = hw_scores;
};
void Student::set_exam_score(int exam_score)
{
    this->exam_score = exam_score;
};
void Student::set_final_score_avg(double final_score_avg)
{
    this->final_score_avg = final_score_avg;
};
void Student::set_final_score_med(double final_score_med)
{
    this->final_score_med = final_score_med;
};
void Student::push_hw_score(int hw_score)
{
    this->hw_scores.push_back(hw_score);
};