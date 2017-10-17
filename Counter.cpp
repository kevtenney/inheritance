//
// Created by Owner on 10/17/2017.
//

#include "Counter.h"
// Doxygen comments. Type /*! or /** followed by Enter
/*!
 * Counter: 1 Parameter Constructor
 * @param count : Initial counter
 */
Counter::Counter(unsigned int count) : count(count) {}

/*!
 * Counter: Default Constructor
 */
Counter::Counter(): count(0) {}

/*!
 * getCount : Returns Getter for count variable
 * @return : current count
 */
unsigned int Counter::getCount() const {
    return count;
}

/*!
 * setCount: Set current count
 * @param count : Number to set counter
 */
void Counter::setCount(unsigned int count) {
    Counter::count = count;
}

/*!
 * ++ operator: Increments counter
 * @return : ++counter
 */
Counter Counter::operator++()
{
    return Counter(++count);
}

/*!
 * CountDn -- operator
 * @return : Decrements counter
 */
Counter CountDn::operator--() {
    return Counter(--count);
}

/*!
 * CountDn Default constructor
 */
CountDn::CountDn() : Counter() {}

/*!
 * CountDn 1 parameter Constructor
 * @param count : Initial Counter
 */
CountDn::CountDn(unsigned int count) : Counter(count) {}
