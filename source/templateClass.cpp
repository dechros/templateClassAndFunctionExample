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

templateClass::templateClass()
{
}

templateClass::~templateClass()
{
}

template <typename T>
T templateClass::templateFunction(T exampleVal)
{
    return exampleVal;
}

template int templateClass::templateFunction<int>(int);
template const char *templateClass::templateFunction<const char *>(const char *);