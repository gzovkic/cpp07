#pragma once 

#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>

template <typename T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();       
    
    private:

}