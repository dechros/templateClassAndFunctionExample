/**
 * @file templateClass.h
 * @author Halit Cetin (halitcetin@live.com)
 * @brief Template class header file
 * @version 0.1
 * @date 04-12-2022
 *
 * @copyright Copyright (c) 2022
 */

/**
 * @brief An example template class for demonstration
 *
 * @tparam T Template variable
 */
template <typename T>
class templateClass
{
private:
    T templateVar;

public:
    /**
     * @brief Create the template class object
     */
    templateClass();

    /**
     * @brief Create the template class object
     * 
     * @param exampleVal Template type variable
     */
    templateClass(T exampleVal);

    /**
     * @brief Destroy the template class object
     */
    ~templateClass();

    /**
     * @brief Example function that uses a template as parameter and returns it
     *
     * @param exampleVal Template type variable
     * @return T Paramater returns
     */
    T normalFunction(T exampleVal);
};