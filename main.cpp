#include <iostream>
#include "vector.hpp"

int main(int argc, char **argv)
{
    Vector<int> my_vector;
    Vector<int> my_vector2;

    my_vector.push_back(2);
    my_vector.push_back(5);
    my_vector.push_back(8);
    my_vector.push_back(4);
    my_vector.push_back(29);
    my_vector.push_back(-3);

    for (int i = 0; i < 70; i++)
    {
        my_vector2.push_back(i + 1);
    }

    std::cout << my_vector.get_size() << std::endl;
    std::cout << my_vector.get_capacity() << std::endl;
    std::cout << my_vector2.get_size() << std::endl;
    std::cout << my_vector2.get_capacity() << std::endl;

    for (auto element : my_vector2)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
