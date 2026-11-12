/**
 * \file example.cpp
 * \brief Small example used to demonstrate Doxygen comments.
 * \author TW Class
 * \version 1.0
 */

/**
 * \brief Adds two integers.
 * \param a First integer.
 * \param b Second integer.
 * \return The sum of a and b.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * \class Calculator
 * \brief A simple calculator class.
 */
class Calculator {
public:
    /**
     * \brief Returns the product of two integers.
     * \param a First integer.
     * \param b Second integer.
     * \return The product of a and b.
     */
    int multiply(int a, int b) {
        return a * b;
    }
};
