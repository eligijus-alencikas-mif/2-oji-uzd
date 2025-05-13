#include "vector.hpp"

template <typename T>
void Vector<T>::push_back(const T &value)
{
    if (size >= capacity)
    {
        capacity = (capacity == 0) ? 1 : capacity * 2;
        std::unique_ptr<T[]> new_data(new T[capacity]);
        for (size_t i = 0; i < size; ++i)
        {
            new_data[i] = data[i];
        }
        data.swap(new_data);
    }
    data[size++] = value;
}

template <typename T>
T Vector<T>::pop_back()
{
    if (size > 0)
    {
        return data[--size];
    }
    throw std::out_of_range("pop_back() called on empty vector");
}