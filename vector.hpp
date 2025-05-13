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

    void push_back(const T &value);
    T pop_back();
};
#endif // VECTOR_HPP