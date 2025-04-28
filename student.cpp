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
    this->exam_score = 0;
    this->final_score_avg = 0.0;
    this->final_score_med = 0.0;
    this->allow_cval_mod = true;
};

// Copy constructor
Student::Student(const Student &other)
{
    this->f_name = other.f_name;
    this->l_name = other.l_name;
    this->hw_scores = other.hw_scores;
    this->exam_score = other.exam_score;
    this->final_score_avg = other.final_score_avg;
    this->final_score_med = other.final_score_med;
    this->allow_cval_mod = other.allow_cval_mod;
};

// Copy assignment operator
Student &Student::operator=(const Student &other)
{
    if (this != &other) // self-assignment check
    {   
        this->f_name = other.f_name;
        this->l_name = other.l_name;
        this->hw_scores = other.hw_scores;
        this->exam_score = other.exam_score;
        this->final_score_avg = other.final_score_avg;
        this->final_score_med = other.final_score_med;
        this->allow_cval_mod = other.allow_cval_mod;
    }
    return *this;
};

// Move constructor
Student::Student(Student &&other) noexcept
{
    this->f_name = std::move(other.f_name);
    this->l_name = std::move(other.l_name);
    this->hw_scores = std::move(other.hw_scores);
    this->exam_score = other.exam_score;
    this->final_score_avg = other.final_score_avg;
    this->final_score_med = other.final_score_med;
    this->allow_cval_mod = other.allow_cval_mod;
};

// Move assignment operator
Student &Student::operator=(Student &&other) noexcept
{
    if (this != &other) // self-assignment check
    {
        this->f_name = std::move(other.f_name);
        this->l_name = std::move(other.l_name);
        this->hw_scores = std::move(other.hw_scores);
        this->exam_score = other.exam_score;
        this->final_score_avg = other.final_score_avg;
        this->final_score_med = other.final_score_med;
        this->allow_cval_mod = other.allow_cval_mod;
    }
    return *this;
};

// std::string Student::get_f_name() const
// {
//     return f_name;
// };

// std::string Student::get_l_name() const
// {
//     return l_name;
// };

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

// void Student::set_f_name(std::string f_name)
// {
//     if (allow_cval_mod)
//         this->f_name = f_name;
// };
// void Student::set_l_name(std::string l_name)
// {
//     if (allow_cval_mod)
//         this->l_name = l_name;
// };
void Student::set_hw_scores(std::vector<int> hw_scores)
{
    if (allow_cval_mod)
        this->hw_scores = hw_scores;
};
void Student::set_exam_score(int exam_score)
{
    if (allow_cval_mod)
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
    if (allow_cval_mod)
        this->hw_scores.push_back(hw_score);
};
void Student::disallow_cval_mod()
{
    allow_cval_mod = false;
};