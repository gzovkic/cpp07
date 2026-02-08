#include "Array.hpp"

int main()
{
    try
    {
        Array<int> numbers(5);
        for (unsigned int i = 0; i < numbers.size(); i++)
            numbers[i] = i * 2;

        Array<int> copy = numbers;
        copy[0] = 42;

        std::cout << "Original [0]: " << numbers[0] << " (should be 0)" << std::endl;
        std::cout << "Copy [0]:     " << copy[0] << " (should be 42)" << std::endl;

        std::cout << numbers[10] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}