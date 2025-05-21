#include <iostream>
#include "vector.hpp"

int main(int argc, char **argv)
{
    Vector<int> my_vector;
    my_vector.push_back(1);
    my_vector.push_back(2);

    my_vector.~Vector();

    std::cout << "Size: " << my_vector.get_size() << std::endl;
    std::cout << "Capacity: " << (my_vector.get_capacity() == 0) << std::endl;

    return 0;
}
