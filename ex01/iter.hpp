#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void    printFnc(const T& t)
{
    std::cout << t << std::endl;
}

template <typename T>
void    iter(T* first_pram, int lengthOfArray, void (*iterFnc)(const T&))
{
    for (int i = 0; i < lengthOfArray; ++i)
        (*iterFnc)(first_pram[i]);
}

#endif