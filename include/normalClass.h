/**
 * @file normalClass.h
 * @author Halit Cetin (halitcetin@live.com)
 * @brief Normal class header file
 * @version 0.1
 * @date 04-12-2022
 *
 * @copyright Copyright (c) 2022
 */

#include <iostream>

/**
 * @brief An example normal class for demonstration
 */
class normalClass
{
private:
public:
    /**
     * @brief Create the normal class object
     */
    normalClass();

    /**
     * @brief Destroy the normal class object
     */
    ~normalClass();

    /**
     * @brief Example function that uses a template as parameter and returns it
     *
     * @tparam T Example template
     * @param exampleVal Template variable
     * @return T Paramater returns
     */
    template <typename T>
    T templateFunction(T exampleVal);
};