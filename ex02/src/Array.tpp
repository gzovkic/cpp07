#include "Array.hpp"

template <typename T>
Array<T>::Array() :
    _array(NULL), _size(0)
{
    // std::cout   << "Array constructor called" 
    //             << std::endl;
}

template <typename T>
Array<T>::Array(int n) : 
    _array(new T[n]()), _size(n)
{
    // std::cout   << "Array constructor called" 
    //             << std::endl;
}

template <typename T>
Array<T>::Array(const Array& other)
    : _array(NULL), _size(0)
{
    // std::cout   << "Array copy-constructor called" 
    //             << std::endl;
    *this = other;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array& other)
{
     // std::cout   << "Array copy-assignment called" 
    //             << std::endl;
    if (this != &other)
    {
        delete[] this->_array;
        this->_size = other._size;
        this->_array = new T[this->_size];
        for(int i = 0; i < this->_size; i++)
            this->_array[i] = other._array[i];
    }
    return(*this);
}

template <typename T>
Array<T>::~Array()
{
    // std::cout   << "Array destructor called"
    //             << std::endl;
    delete[] _array;
}

template <typename T>
T & Array<T>::operator[](int index)
{
    if (index >= this->_size)
        throw std::out_of_range("Index out of bounce")
    return(this->_array[index]);
}

template <typename T>
int Array<T>::size() const
{
    return (this->_size);
}