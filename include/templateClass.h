/**
 * @file templateClass.h
 * @author Halit Cetin (halitcetin@live.com)
 * @brief Template class header file
 * @version 0.1
 * @date 04-12-2022
 *
 * @copyright Copyright (c) 2022
 */

#include <iostream>

/**
 * @brief An example class for demonstration
 */
class templateClass
{
private:
public:
    /**
     * @brief Create the template Class object
     */
    templateClass();

    /**
     * @brief Destroy the template Class object
     */
    ~templateClass();

    /**
     * @brief Example function that uses a template as parameter
     *
     * @tparam T Example template
     * @param exampleVal Template variable
     * @return T Paramater returns
     */
    template <typename T>
    T templateFunction(T exampleVal);
};