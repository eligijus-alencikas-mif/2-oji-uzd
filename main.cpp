#include <iostream>
#include "vector.hpp"

int main(int argc, char **argv)
{
    Vector<int> my_vector;
    my_vector.push_back(2);
    my_vector.push_back(3);
    my_vector.push_back(4);
    std::cout << my_vector.pop_back() << std::endl;
    return 0;
}