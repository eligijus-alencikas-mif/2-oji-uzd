#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <memory>
#include <iostream>

template <typename T>
class Vector
{
    size_t size;
    size_t capacity;
    std::unique_ptr<T> data;

public:
    Vector() : size(0), capacity(1), data(new T[1]) {}
    ~Vector() { data.release(); }

    void push_back(const T &value)
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
    T pop_back()
    {
        if (size > 0)
        {
            return data[--size];
        }
        throw std::out_of_range("pop_back() called on empty vector");
    }

    void clear()
    {
        size = 0;
        capacity = 1;
        data.reset(new T[capacity]);
    }

    void resize(size_t new_capacity)
    {
        if (new_capacity < size)
        {
            capacity = new_capacity;
            size = new_capacity;
        }
        std::unique_ptr<T> new_data(new T[new_capacity]);
        for (size_t i = 0; i < size; ++i)
        {
            new_data[i] = data[i];
        }
        data.swap(new_data);
        capacity = new_capacity;
    }

    void erase(size_t index)
    {
        if (index < size)
        {
            for (size_t i = index; i < size - 1; ++i)
            {
                data[i] = data[i + 1];
            }
            --size;
        }
        else
        {
            throw std::out_of_range("erase() index out of range");
        }
    }
    void insert(size_t index, const T &value){

    }
    T at(const size_t index)
    {
        if (index < size)
        {
            return data[index];
        }

        throw std::out_of_range("at() index out of range");
    }
};
#endif // VECTOR_HPP