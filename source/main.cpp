/**
 * @file main.cpp
 * @author Halit Cetin (halitcetin@live.com)
 * @brief Template class example project
 * @version 0.1
 * @date 04-12-2022
 *
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include "templateClass.h"

/**
 * @brief Enterance point of the program
 * 
 * @return int Program succes value
 */
int main(void)
{
    templateClass templateExample;

    /**
     * @note Here is an example of how to use template functions in a class.
     */
    std::cout << templateExample.templateFunction<int>(3) << std::endl;
    std::cout << templateExample.templateFunction<const char *>("deneme") << std::endl;
    return 0;
}