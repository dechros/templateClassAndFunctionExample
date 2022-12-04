/**
 * @file templateClass.cpp
 * @author Halit Cetin (halitcetin@live.com)
 * @brief Template class file
 * @version 0.1
 * @date 04-12-2022
 * 
 * @copyright Copyright (c) 2022
 */

#include "templateClass.h"

template <typename T>
templateClass<T>::templateClass()
{
}

template <typename T>
templateClass<T>::templateClass(T exampleVal)
{
}

template <typename T>
templateClass<T>::~templateClass()
{
}

template <typename T>
T templateClass<T>::normalFunction(T exampleVal)
{
    return exampleVal;
}

/**
 * @note Because we put the functions and the prototypes in different files(.c and .h),
 * we need to re define every usage of the template class functions as well.
 */

template templateClass<char const*>::templateClass();
template templateClass<char const*>::templateClass(char const*);
template templateClass<char const*>::~templateClass();
template char const* templateClass<char const*>::normalFunction(char const*);

template templateClass<int>::templateClass();
template templateClass<int>::templateClass(int);
template templateClass<int>::~templateClass();
template int templateClass<int>::normalFunction(int);