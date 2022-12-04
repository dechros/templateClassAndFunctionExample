/**
 * @file normalClass.cpp
 * @author Halit Cetin (halitcetin@live.com)
 * @brief Normal class file
 * @version 0.1
 * @date 04-12-2022
 *
 * @copyright Copyright (c) 2022
 */

#include "normalClass.h"

normalClass::normalClass()
{
}

normalClass::~normalClass()
{
}

template <typename T>
T normalClass::templateFunction(T exampleVal)
{
    return exampleVal;
}

/**
 * @note Because we put the function and the prototype in different files(.c and .h),
 * we need to re define every usage of the template function as well.
 */

template int normalClass::templateFunction<int>(int);
template const char *normalClass::templateFunction<const char *>(const char *);